#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(a, b, c) for (ll i = a; i < b; i += c)

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        ll n, e, c, pO, pCS, pCC;
        cin >> n >> e >> c >> pO >> pCS >> pCC;

        // to check if possible
        ll check = min(e, c);
        if (e > c)
            check += (e - c) / 2;
        else
            check += (c - e) / 3;
        if (check < n)
        {
            cout << -1 << endl;
            continue;
        }

        // finding mprice
        ll mprice = LONG_MAX;
        f(0, min(e, c) + 1, 1)
        {
            if (i > n)
                break;

            ll currprice = i * pCC;
            if (i < n)
            {
                ll rO = (e - i) / 2, rCS = (c - i) / 3;
                if (pO <= pCS)
                {
                    if (rO >= n - i)
                        currprice += (n - i) * pO;
                    else
                    {
                        currprice += rO * pO;
                        if (rO + rCS + i < n)
                            currprice = LONG_MAX;
                        else
                            currprice += (n - rO - i) * pCS;
                    }
                }
                else
                {
                    if (rCS >= n - i)
                        currprice += (n - i) * pCS;
                    else
                    {
                        currprice += rCS * pCS;
                        if (rO + rCS + i < n)
                            currprice = LONG_MAX;
                        else
                            currprice += (n - rCS - i) * pO;
                    }
                }
            }
            mprice = min(currprice, mprice);
        }
        cout << mprice << endl;
    }

    return 0;
}