// solution for only
// Subtask #1 (20 points): K=1
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (ll i = 0; i < n; i++)
typedef vector<int> vi;

int minCost(vi f, int n, int k)
{
    int minCost = k;
    map<int, int> memPF;

    int meh = INT_MAX, msf = INT_MAX;
    fo(i, n)
    {
    }
    fo(i, n)
    {
        if (memPF[f[i]] != 0)
        {
            minCost += k;
            memPF.clear();
            memPF[f[i]]++;
        }
        else
            memPF[f[i]]++;
    }
    return minCost;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;

        vi family(n);
        fo(i, n)
        {
            cin >> family[i];
        }

        cout << minCost(family, n, k) << endl;
    }

    return 0;
}