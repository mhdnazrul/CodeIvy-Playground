// bee-1018-Banknotes.cpp
#include <bits/stdc++.h>
using namespace std;

void Bank_Note(int amount)
{
  int notes;
  cout << amount << endl;
  notes = amount / 100;
  cout << notes << " nota(s) de R$ 100,00" << endl;
  amount %= 100; 

  notes = amount / 50;
  cout << notes << " nota(s) de R$ 50,00" << endl;
  amount %= 50; 

  notes = amount / 20;
  cout << notes << " nota(s) de R$ 20,00" << endl;
  amount %= 20; 

  notes = amount / 10;
  cout << notes << " nota(s) de R$ 10,00" << endl;
  amount %= 10; 

  notes = amount / 5;
  cout << notes << " nota(s) de R$ 5,00" << endl;
  amount %= 5; 

  notes = amount / 2;
  cout << notes << " nota(s) de R$ 2,00" << endl;
  amount %= 2; 
  
  notes = amount; 
  cout << notes << " nota(s) de R$ 1,00" << endl;
}

int main()
{
  int amount;
  cin >> amount;
  Bank_Note(amount);
  return 0;
}