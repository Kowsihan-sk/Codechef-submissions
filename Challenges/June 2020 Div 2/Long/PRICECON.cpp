#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int t_b = 0, t_a = 0;

        for (int i = 0; i < n; i++)
        {
            t_b += v[i];
            if (v[i] > k)
                t_a += k;
            else
                t_a += v[i];
        }

        int revenue_lost = t_b - t_a;
        cout << revenue_lost << endl;
    }
    return 0;
}