#include <iostream>
using namespace std;

int main()
{
  int N, count = 0;
  cin >> N; 

  if (N < 3)
  {
    cout << "No" << endl;
    return 0;
  }

  int A[N];
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  for (int i = 0; i <= N - 3; i++)
  {
    if (A[i] == A[i + 1] && A[i] == A[i + 2])
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}