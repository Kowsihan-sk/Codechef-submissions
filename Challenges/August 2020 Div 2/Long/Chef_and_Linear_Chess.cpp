#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (ll i = 0; i < n; i++)
typedef vector<ll> vll;

ll Solution(vll a, ll k, ll n)
{
    bool flag = false;
    ll minimum = LONG_MAX, mPlayer;
    fo(i, n)
    {
        if (a[i] > k)
            continue;

        if (k % a[i] == 0)
        {
            flag = true;
            if (k/a[i] < minimum)
            {
                minimum = k/a[i];
                mPlayer = a[i];
            }
        }

    }
    if (flag)
        return mPlayer;
    return -1;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        ll n, k;
        cin>>n>>k;

        vll a(n);
        fo(i, n)
        {
            cin>>a[i];
        }
        cout<<Solution(a, k, n)<<endl;
    }

    return 0;
}