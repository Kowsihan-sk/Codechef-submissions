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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        long long diff = 0;
        for (int i = 1; i < n; i++)
            diff += abs(v[i] - v[i - 1]);
        diff -= n - 1;
        cout << diff << endl;
    }

    return 0;
}