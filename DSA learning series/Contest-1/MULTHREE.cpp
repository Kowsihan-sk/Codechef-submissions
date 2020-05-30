#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;

    while (T--)
    {
        unsigned long long k, a[8], sum = 0;
        cin >> k >> a[0] >> a[1];

        if (k == 2)
        {
            sum = a[0] + a[1];
            if (sum % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }

        a[2] = (a[0] + a[1]) % 10;
        for (int i = 3; i < 8; i++)
            a[i] = (2 * a[i - 1]) % 10;

        sum = (a[4] + a[5] + a[6] + a[7]) * (k / 4 - 1) + a[0] + a[1] + a[2] + a[3];
        if (k % 4 == 1)
            sum += a[4];
        if (k % 4 == 2)
            sum += a[4] + a[5];
        if (k % 4 == 3)
            sum += a[4] + a[5] + a[6];

        if (sum % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
