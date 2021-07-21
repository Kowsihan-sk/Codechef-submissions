#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(a, b, c) for (ll i = a; i < b; i += c)
#define Size(n) ((int)(n).size())

int main()
{
    ll T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        ll count = 0;
        bool flag = false;

        f(0, Size(s), 1)
        {
            if (s[i] == '0')
                flag = false;
            else if (!flag)
            {
                count++;
                flag = true;
            }
        }
        cout << count << endl;
    }

    return 0;
}