#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long G;
        cin >> G;

        while (G--)
        {
            int i, n, q, total = 0;
            cin >> i >> n >> q;

            if (n % 2 == 0 || i == q)
                total = n / 2;
            else
                total = n / 2 + 1;

            cout << total << endl;
        }
    }
    return 0;
}