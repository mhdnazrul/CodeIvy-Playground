// bee-1012-Area
#include <bits/stdc++.h>
using namespace std;
int main()
{
  double A, B, C, pi = 3.14159, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
  cin >> A >> B >> C;
  TRIANGULO = (A * C) / 2;
  cout << fixed << setprecision(3);
  cout << "TRIANGULO: " << TRIANGULO << endl;
  CIRCULO = pi * (C * C);
  cout << "CIRCULO: " << CIRCULO << endl;
  TRAPEZIO = ((A + B) * C) / 2;
  cout << "TRAPEZIO: " << TRAPEZIO << endl;
  QUADRADO = B * B;
  cout << "QUADRADO: " << QUADRADO << endl;
  RETANGULO = A * B;
  cout << "RETANGULO: " << RETANGULO << endl;
  return 0;
}