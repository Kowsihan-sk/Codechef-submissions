#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(a, b, c) for (ll i = a; i < b; i += c)
#define fd(a, b, c) for (ll i = a; i >= b; i -= c)
typedef vector<ll> vl;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        ll c;
        cin >> c;

        if (c == 1)
        {
            cout << 0 << endl;
            continue;
        }

        int n = (int)log2(c);
        vl v(++n);
        ll temp = 0;
        f(0, n, 1)
        {
            if ((c & (1 << temp)))
                v[i] = 1;
            else
                v[i] = 0;
            temp++;
        }
        // fd(n - 1, 0, 1) cout << v[i] << " ";
        // cout << endl;

        ll a = 0, b = 0;
        f(0, n, 1)
        {
            if (i == n - 1)
            {
                a += (v[i] << i);
                continue;
            }
            if (v[i])
                b += (1 << i);
            else
            {
                a += (1 << i);
                b += (1 << i);
            }
        }
        cout << a * b << endl;
    }

    return 0;
}