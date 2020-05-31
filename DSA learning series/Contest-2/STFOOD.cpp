#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> S(n), P(n), V(n);
        for (int i = 0; i < n; i++)
        {
            cin >> S[i] >> P[i] >> V[i];
        }

        int maxP = 0;

        for (int i = 0; i < n; i++)
        {
            int stores = S[i] + 1;
            int profit = (P[i] / stores) * V[i];
            if (profit > maxP)
                maxP = profit;
        }

        cout << maxP << endl;
    }
    return 0;
}
