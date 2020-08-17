// solution only for
// Subtask #2 (10 points): A1,A2,…,AN is a permutation of the integers 1 through N
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, k, n) for (ll i = k; i < n; i++)
#define defo(i, k, n) for (ll i = k; i >= n; i--)
typedef vector<int> vi;
typedef vector<ll> vll;
const int mod = 1e9 + 7;

void subseq(int n)
{
    vi temp(n);
    temp[0] = 1;

    fo(i, 1, n)
    {
        temp[i] = (temp[i - 1] * 2) % mod;
    }
    defo(i, n - 1, 0)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;

        vll arr(n);
        fo(i, 0, n)
        {
            cin >> arr[i];
        }
        subseq(n);
        cout << endl;
    }
    return 0;
}