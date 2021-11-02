#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int want_even = 0, want_odd = 0, have_even = 0, have_odd = 0;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            (i % 2 == 0 ? want_odd++ : want_even++);
            (x % 2 == 0 ? have_even++ : have_odd++);
        }

        int ans = min(want_even, have_even) + min(want_odd, have_odd);
        cout << ans << endl;
    }
}