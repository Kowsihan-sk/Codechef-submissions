#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        // NO check
        bool noCheck = false;
        if (v[n - 2] == v[n - 1])
            noCheck = true;
        else
        {
            for (int i = 1; i < n - 2; i++)
            {
                if (v[i - 1] == v[i])
                {
                    if (v[i] == v[i + 1])
                    {
                        noCheck = true;
                        break;
                    }
                }
            }
        }
        if (noCheck)
        {
            cout << "NO" << endl;
            continue;
        }

        // to make yes conditon
        vector<long long> ans(n);

        int k = 0, last = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                ans[k] = v[i];
                k++;
            }
            else if (v[i] == v[i + 1])
            {
                ans[k] = v[i];
                k++;
                i++;
                last = i;
            }
            else
            {
                ans[k] = v[i];
                k++;
            }
        }

        for (int i = last; i > 0 && k < n; i--)
        {
            if (v[i] == v[i - 1])
            {
                ans[k] = v[i];
                k++;
                i--;
            }
        }

        // output
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
