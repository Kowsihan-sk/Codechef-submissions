#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {
        long long n;
        cin >> n;

        long long count = 0;
        while (n)
        {
            count += n / 5;
            n /= 5;
        }

        cout << count << endl;
    }
    return 0;
}