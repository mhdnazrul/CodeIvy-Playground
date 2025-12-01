import os
import re
import hashlib
from pathlib import Path

ROOT = Path(".")

def normalize_name(filename: str):
    name, ext = os.path.splitext(filename)

    # remove dots and hyphens
    name = name.replace('.', ' ')
    name = name.replace('-', ' ')
    
    # convert multiple spaces to one
    name = re.sub(r'\s+', ' ', name).strip()
    
    # replace spaces with underscore
    name = name.replace(" ", "_")

    # multiple underscores -> single
    name = re.sub(r'_+', '_', name)

    return name + ext


def file_hash(path):
    """Returns SHA256 hash for content match"""
    sha = hashlib.sha256()
    with open(path, "rb") as f:
        sha.update(f.read())
    return sha.hexdigest()


def clean_and_remove_duplicates():
    seen = {}  
    # key: normalized_name + hash → value: original_full_path

    for root, dirs, files in os.walk(ROOT):
        for f in files:
            if not (f.endswith(".cpp") or f.endswith(".py")):
                continue

            full_path = Path(root) / f
            normalized = normalize_name(f)
            h = file_hash(full_path)

            key = f"{normalized}::{h}"

            # First time we see this normalized+hash file
            if key not in seen:
                seen[key] = full_path

                # If normalized name is different → rename
                if full_path.name != normalized:
                    new_path = full_path.with_name(normalized)
                    
                    # Avoid accidental overwrite
                    if new_path.exists():
                        new_path.unlink()

                    full_path.rename(new_path)

                continue

            # Duplicate found → delete this one
            print(f"Deleting duplicate: {full_path}")
            full_path.unlink()


if __name__ == "__main__":
    clean_and_remove_duplicates()
    print("\nDone! All duplicates removed and filenames cleaned.\n")
