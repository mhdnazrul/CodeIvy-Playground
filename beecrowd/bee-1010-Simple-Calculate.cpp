// bee-1010-Simple-Calculate.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int product_code_1, product_code_2, units_of_product_1, units_of_product_2;
  float price_product_1, price_product_2, total_prices;
  cin >> product_code_1 >> units_of_product_1 >> price_product_1;
  cin >> product_code_2 >> units_of_product_2 >> price_product_2;
  total_prices = (units_of_product_1 * price_product_1) + (units_of_product_2 * price_product_2);
  cout << fixed << setprecision(2);
  cout << "VALOR A PAGAR: R$ "<< total_prices << endl;
  return 0;
}