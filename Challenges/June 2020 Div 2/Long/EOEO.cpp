#include <bits/stdc++.h>
using namespace std;

long long Jwin(long long x)
{
    long long Jwin = 0;
    while (x)
    {
        if (x % 2 == 0)
            x /= 2;
        else
            return x / 2;
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long n;
        cin >> n;

        cout << Jwin(n) << endl;
    }

    return 0;
}
