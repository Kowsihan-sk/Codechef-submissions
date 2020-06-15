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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int change5_count = 0, change10_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 5)
                change5_count++;
            else if (a[i] == 10)
            {
                change10_count++;
                change5_count--;
                if (change5_count < 0)
                    break;
            }
            else
            {
                if (change10_count > 0)
                    change10_count--;
                else
                    change5_count -= 2;

                if (change5_count < 0 || change10_count < 0)
                    break;
            }
        }
        if (change5_count >= 0 && change10_count >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}