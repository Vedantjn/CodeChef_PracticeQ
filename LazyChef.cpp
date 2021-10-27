#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int m, x, d;
    cout << "Enter the conditions:" << endl;
    cin >> m >> x >> d;

    cout << "It took" << min((m * x), (m + d)) << "seconds" << endl;
  }

  return 0;
}