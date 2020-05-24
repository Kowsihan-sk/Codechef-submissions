#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string S;
        cin >> S;

        int count = 0;
        int m = S.length() - 2, n = 2;

        while (m >= 2)
        {
            int d = m / 2;

            if (S.substr(0, d) == S.substr(d, d))
            {
                int k = n / 2;
                if (S.substr(m, k) == S.substr(m + k, k))
                {
                    count++;
                    m -= 2;
                    n += 2;
                    continue;
                }
                else
                {
                    m -= 2;
                    n += 2;
                    continue;
                }
            }
            else
            {
                m -= 2;
                n += 2;
                continue;
            }
        }

        cout << count << endl;
    }

    return 0;
}