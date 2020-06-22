#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, b, m;
        cin >> n >> b >> m;

        vector<long long> v(m);
        for (int i = 0; i < m; i++)
            cin >> v[i];

        int si = 0;
        if (b == 1)
            si = n;
        else
        {
            si = n / (b - 1) + 1;
            if (n % (b - 1) == 0)
                si--;
        }
        int high = 0;

        vector<int> store(si);
        for (int i = 0; i < si; i++)
        {
            if (b == 1)
                store[i] = i + 1;
            else
                store[i] = (i + 1) * b - 1;
        }

        int count = 0;
        for (int i = 0; i < m; i++)
        {
            bool flag = false;
            for (int j = 0; j < si; j++)
            {
                if (b == 1)
                {
                    if (v[i] < store[j])
                        flag = true;
                }
                else if (v[i] <= store[j])
                    flag = true;

                if (flag)
                {
                    if (high != store[j] || high == 0)
                    {
                        high = store[j];
                        count++;
                        break;
                    }
                    if (high == store[j])
                        break;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
