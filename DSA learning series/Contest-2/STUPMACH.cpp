#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;

    while (T--)
    {
        long long n;
        cin >> n;

        vector<unsigned long long> s(n);
        for (size_t i = 0; i < n; i++)
            cin >> s[i];

        long long max_token = s[0], rem = 0;
        for (size_t i = 1; i < n; i++)
        {
            if (s[i] > s[i - 1])
                s[i] = s[i - 1];
            if (s[i] == 1)
            {
                rem = n - i;
                break;
            }
            max_token += s[i];
        }
        max_token += rem;

        cout << max_token << endl;
    }
    return 0;
}
