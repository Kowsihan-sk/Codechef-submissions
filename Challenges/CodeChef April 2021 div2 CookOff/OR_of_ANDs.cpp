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

ll ans_subar(vl ar)
{
    ll ans = 0;
    for (int i = 0; i < sz(ar); i++)
        ans |= ar[i];

    return ans;
}

vl binary_num;
ll ans;
void no_in_binary_vec(vl ar)
{
    binary_num.resize(32);
    ans = 0;
    f(0, sz(ar), 1)
    {
        ans |= ar[i];
        ll k = 0, t = ar[i];
        while (t > 0)
        {
            binary_num[k] += t % 2;
            t /= 2;
            k++;
        }
    }
}

int main()
{
    fast;

    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n, q;
        cin >> n >> q;
        vl ar(n);
        f(0, n, 1) cin >> ar[i];
        no_in_binary_vec(ar);
        cout << ans << endl;

        while (q--)
        {
            ll a, b;
            ll t, k = 0, prev;
            cin >> a >> b;

            t = ar[a - 1];
            while (t > 0)
            {
                prev = binary_num[k];
                binary_num[k] -= (t % 2);
                t /= 2;
                if (prev >= 1 && binary_num[k] == 0)
                    ans -= pow(2, k);
                k++;
            }

            ar[a - 1] = b;
            t = ar[a - 1], k = 0;
            while (t > 0)
            {
                prev = binary_num[k];
                binary_num[k] += (t % 2);
                t /= 2;
                if (prev == 0 && binary_num[k] > 0)
                    ans += pow(2, k);
                k++;
            }

            cout << ans << endl;
            binary_num.clear();
        }
    }

    return 0;
}