#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
  cout << fixed << setprecision(1);
  double n1, n2, n3, n4, n5, average, ans, sum;
  cin >> n1 >> n2 >> n3 >> n4;
  sum = (n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1);
  average = sum / 10; // (2 + 3 + 4 + 1) => 10

  cout << "Media: " << average << endl;
  if (average >= 7)
    cout << "Aluno aprovado." << endl;
  else if (average >= 5)
  {
    cout << "Aluno em exame." << endl;
    cin >> n5;

    cout << "Nota do exame: " << n5 << endl;
    ans = (average + n5) / 2;
    if (ans >= 5)
      cout << "Aluno aprovado." << endl;
    else
      cout << "Aluno reprovado." << endl;
    cout << "Media final: " << ans << endl;
  }
  else
    cout << "Aluno reprovado." << endl;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}
