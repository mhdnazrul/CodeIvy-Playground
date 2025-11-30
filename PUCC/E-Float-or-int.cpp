#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
  double n;
  cin >> n;
  int find_int = n;
  double find_des = n - find_int;
  if(find_des==0){
    cout << "int " << find_int << endl;
  }else{
    cout << "float " << find_int << " " << find_des << endl;
  }
  return 0;
}