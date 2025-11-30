#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159 // we known pi = 3.14159
int main() {
    double R, result;
    cin >> R;
    result = PI * pow(R, 2);  // pi value all ready define. you can use pow(R, 2) or (R*R) 
    cout << fixed << setprecision(4); // Sets the output to fixed-point notation with 4
    cout << "A=" << result << endl;
    return 0;
}
