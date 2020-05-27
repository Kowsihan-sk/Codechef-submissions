#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long n, rev_n = 0;
        cin >> n;

        while (n)
        {
            int rem = n % 10;
            n /= 10;

            rev_n = rev_n * 10 + rem;
        }

        cout << rev_n << endl;
    }

    return 0;
}