#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;

    while (T--)
    {
        vector<int> work_per_day(5);
        long long time = 0, time_max = 24 * 5, p;

        for (int i = 0; i < 5; i++)
            cin >> work_per_day[i];

        cin >> p;

        for (int i = 0; i < 5; i++)
            time += work_per_day[i] * p;

        if (time > time_max)
        {
            cout << "Yes" << endl;
            continue;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
