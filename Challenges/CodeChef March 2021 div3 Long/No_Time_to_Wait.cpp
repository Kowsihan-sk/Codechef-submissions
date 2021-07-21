#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(a, b, c) for (ll i = a; i < b; i += c)
typedef vector<ll> vl;

int main()
{
    ll n, x, h;
    cin >> n >> h >> x;

    vl v(n);
    f(0, n, 1) cin >> v[i];
    f(0, n, 1)
    {
        if (v[i] + x >= h)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
