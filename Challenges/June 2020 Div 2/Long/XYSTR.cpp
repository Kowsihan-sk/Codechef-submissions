#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        int pair = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i - 1] != s[i])
            {
                pair++;
                i++;
            }
        }

        cout << pair << endl;
    }
    return 0;
}