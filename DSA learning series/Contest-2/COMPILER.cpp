#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        int temp = 0, sum = 0, exp = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i] == '<')
                temp++;
            else
            {
                temp--;
                if (temp < 0)
                    break;
                exp += 2;
                if (temp == 0)
                {
                    sum += exp;
                    exp = 0;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
