/** Author : S Kowsihan **/
#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define endl "\n"
typedef vector<ll> vl;

int main()
{
    fast;

    ll TT;
    cin >> TT;

    vl a = {0, 20, 36, 51, 60};
    vl b = {0, 16, 28, 39};
    while (TT--)
    {
        ll n;
        cin >> n;
        if (n < 5)
            cout << a[n] << endl;
        else
        {
            ll sum = 60LL + (44LL * ((n - 4) / 4LL)) + b[n % 4];
            cout << sum << endl;
        }
    }

    return 0;
}