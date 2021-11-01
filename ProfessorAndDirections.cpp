#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        int result = 0;

        cin >> n;
        cin >> s;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                result = 1;
                break;
            }
        }

        if (result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
