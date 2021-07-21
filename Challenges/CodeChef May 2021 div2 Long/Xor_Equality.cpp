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
#define fo(i, a, b, c) for (ll i = a; i < b; i += c)
#define fd(a, b, c) for (ll i = a; i >= b; i -= c)
#define fdo(i, a, b, c) for (ll i = a; i >= b; i -= c)
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()
typedef vector<ll> vl;
typedef vector<vl> vll;
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int mod = 1e9 + 7;
const int N = (int)1e5 + 1;

int main()
{
    fast;
    vl pre_ar(N);
    pre_ar[1] = 1;
    f(2, N, 1)
        pre_ar[i] = ((pre_ar[i - 1] % mod) * (2LL)) % mod;

    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n;
        cin >> n;

        cout << pre_ar[n] << endl;
    }

    return 0;
}