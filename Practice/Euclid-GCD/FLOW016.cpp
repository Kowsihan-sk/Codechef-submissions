#include <bits/stdc++.h>
using namespace std;

long long gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long a, b;
        cin >> a >> b;

        long long GCD = gcd(a, b);
        long long LCM = (a * b) / GCD;
        cout << GCD << " " << LCM << endl;
    }
    return 0;
}