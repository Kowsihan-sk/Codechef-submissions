#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(a, b, c) for (ll i = a; i < b; i += c)
#define fo(i, a, b, c) for (ll i = a; i < b; i += c)
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()
typedef vector<ll> vl;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        ll n;
        cin >> n;
        vl v(n);
        f(0, n, 1) cin >> v[i];

        bool flag = false;
        sort(all(v));
        f(0, n, 1)
        {
            if (v[i] > (i + 1))
            {
                cout << "Second" << endl;
                flag = true;
                break;
            }
        }
        if (flag)
            continue;

        ll sumdiff = 0;
        f(0, n, 1)
            sumdiff += abs(v[i] - (i + 1));

        if (sumdiff % 2)
            cout << "First";
        else
            cout << "Second";

        cout << endl;
    }

    return 0;
}