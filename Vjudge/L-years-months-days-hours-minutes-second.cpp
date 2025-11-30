#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    long long seconds;
    cin >> seconds;

    long long years = seconds / (12LL * 30 * 24 * 60 * 60);
    seconds %= (12LL * 30 * 24 * 60 * 60);

    long long months = seconds / (30LL * 24 * 60 * 60);
    seconds %= (30LL * 24 * 60 * 60);

    long long days = seconds / (24LL * 60 * 60);
    seconds %= (24LL * 60 * 60);

    long long hours = seconds / (60 * 60);
    seconds %= (60 * 60);

    long long minutes = seconds / 60;
    seconds %= 60;

    cout << "Case " << i << ": ";

    if (years > 0)
    {
      cout << years << (years == 1 ? " year" : " years") << " ";
    }
    if (months > 0)
    {
      cout << months << (months == 1 ? " month" : " months") << " ";
    }
    if (days > 0)
    {
      cout << days << (days == 1 ? " day" : " days") << " ";
    }
    if (hours > 0)
    {
      cout << hours << (hours == 1 ? " hour" : " hours") << " ";
    }
    if (minutes > 0)
    {
      cout << minutes << (minutes == 1 ? " minute" : " minutes") << " ";
    }
    if (seconds > 0)
    {
      cout << seconds << (seconds == 1 ? " second" : " seconds");
    }

    cout << endl;
  }

  return 0;
}