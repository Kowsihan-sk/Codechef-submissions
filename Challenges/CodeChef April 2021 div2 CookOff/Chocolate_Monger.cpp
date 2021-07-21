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
#define pb push_back
#define fo(i, a, b, c) for (ll i = a; i < b; i += c)
#define fd(a, b, c) for (ll i = a; i >= b; i -= c)
#define fdo(i, a, b, c) for (ll i = a; i >= b; i -= c)
#define all(n) (n).begin(), (n).end()
typedef vector<vl> vll;
#define ff first
#define ss second
#define mp make_pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int mod = 1e9 + 7;

int main()
{
    fast;

    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n, x;
        cin >> n >> x;

        vl ar(n);
        set<ll> s;
        f(0, n, 1) cin >> ar[i], s.insert(ar[i]);

        ll rem = n - s.size();
        x -= rem;
        if (x <= 0)
            cout << s.size() << endl;
        else
            cout << s.size() - x << endl;
    }

    return 0;
}