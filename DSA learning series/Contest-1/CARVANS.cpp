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

        vector<int> speed(n);
        for (int i = 0; i < n; i++)
            cin >> speed[i];

        int count = 1, max = speed[0];
        for (int i = 1; i < n; i++)
        {
            if (speed[i] <= max)
            {
                count++;
                max = speed[i];
            }
        }

        cout << count << endl;
    }
    return 0;
}