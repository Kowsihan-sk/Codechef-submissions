#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (ll i = 0; i < n; i++)
#define F first
#define S second

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        ll n;
        cin >> n;

        set<ll> pX, pY;
        fo(i, (4 * n) - 1)
        {
            ll x, y;
            cin >> x >> y;

            if (pY.count(y))
                pY.erase(y);
            else
                pY.insert(y);

            if (pX.count(x))
                pX.erase(x);
            else
                pX.insert(x);
        }

        cout << *pX.begin() << " " << *pY.begin() << endl;
    }

    return 0;
}