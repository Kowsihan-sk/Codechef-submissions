#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        int n = s.length() / 2, flag = 1;
        string s1 = s.substr(0, n), s2 = s.substr(n, n);

        if (s.length() % 2 != 0)
            s2 = s.substr(n + 1, n);

        vector<char> s_1(s1.begin(), s1.end()), s_2(s2.begin(), s2.end());
        vector<int> alpha_1(26), alpha_2(26);

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == int(s_1[j] - 97))
                    alpha_1[i]++;
                if (i == int(s_2[j] - 97))
                    alpha_2[i]++;
            }

            if (alpha_1[i] != alpha_2[i])
            {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
    }

    return 0;
}