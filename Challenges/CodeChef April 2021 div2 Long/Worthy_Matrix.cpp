/** Author : S Kowsihan **/
#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define endl "\n"
#define f(a, b, c) for (ll i = a; i < b; i += c)
#define sz(n) ((int)(n).size())
typedef vector<ll> vl;
#define fo(i, a, b, c) for (ll i = a; i < b; i += c)
typedef vector<vl> vll;

ll K_worthy_mat(vll ar, ll k)
{
    ll n = sz(ar), m = sz(ar[0]), count = 0;
    f(0, n, 1) fo(j, 0, m, 1) if (ar[i][j] >= k) count++;

    // prefix sum array
    vll p_ar(n + 1, vl(m + 1));
    f(0, n + 1, 1) p_ar[i][0] = 0;
    f(0, m + 1, 1) p_ar[0][i] = 0;
    f(1, m + 1, 1) p_ar[1][i] = ar[0][i - 1];
    f(2, n + 1, 1)
    {
        fo(j, 1, m + 1, 1)
            p_ar[i][j] = ar[i - 1][j - 1] + p_ar[i - 1][j];
    }
    f(1, n + 1, 1)
    {
        fo(j, 2, m + 1, 1)
            p_ar[i][j] += p_ar[i][j - 1];
    }

    ll ord = 2, sum = 0, minIndex = min(n, m), ti, tj;
    while (ord <= minIndex)
    {
        f(ord, n + 1, 1)
        {
            sum = 0;
            fo(j, ord, m + 1, 1)
            {
                double avg = 0.0;
                ti = i - ord + 1;
                tj = j - ord + 1;

                sum = p_ar[i][j] - p_ar[ti - 1][j] - p_ar[i][tj - 1] + p_ar[ti - 1][tj - 1];
                avg = (double)sum / (double)(ord * ord);
                if (avg >= k)
                {
                    count += m - j + 1;
                    break;
                }
            }
        }
        ord++;
    }

    return count;
}

int main()
{
    fast;

    ll TT;
    cin >> TT;

    ll n, m, k;
    while (TT--)
    {
        cin >> n >> m >> k;
        vll ar(n, vl(m));
        f(0, n, 1) fo(j, 0, m, 1) cin >> ar[i][j];
        cout << K_worthy_mat(ar, k) << endl;
    }

    return 0;
}