#include <bits/stdc++.h>
using namespace std;

#define ll long long

int DigitSum(ll x)
{
    int sum = 0;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int apoints = 0, bpoints = 0;
        while (n--)
        {
            ll a, b;
            cin >> a >> b;

            a = DigitSum(a);
            b = DigitSum(b);

            if (a == b)
            {
                apoints++;
                bpoints++;
            }
            else if (a > b)
                apoints++;
            else
                bpoints++;
        }

        if (apoints == bpoints)
            cout << 2 << " " << apoints << endl;
        else if (apoints > bpoints)
            cout << 0 << " " << apoints << endl;
        else
            cout << 1 << " " << bpoints << endl;
    }

    return 0;
}