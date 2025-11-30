#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> matrix(h,vector<int>(w));
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cin >> matrix[i][j];
        }
    }


    for (int i = 0; i < h; ++i) {
        string s = "";
        for (int j = 0; j < w; ++j) {
            if (matrix[i][j] == 0) {
                s += '.';
            } else if (matrix[i][j] >= 1 && matrix[i][j] <= 26) {
                s += char(matrix[i][j] + 64);
            }
        }
        cout << s <<endl;
    }

    return 0;
}
