#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (ll i = 0; i < n; i++)

void Smallest_KMP(string s, string p)
{
    sort(s.begin(), s.end());
    string s1 = s, s2 = s, temp = p;
    int n = s.length(), m = p.length();
    sort(temp.begin(), temp.end());

    int index = 0;
    fo(i, s1.length())
    {
        if (index < m)
        {
            if (temp[index] == s1[i])
            {
                s1.erase(s1.begin() + i);
                s2.erase(s2.begin() + i);
                i--;
                index++;
            }
        }
    }

    int pos = 0;
    fo(i, s1.length())
    {
        if ((int)p[0] > (int)s1[i])
            pos = i + 1;
        else
            break;
    }
    s1.insert(pos, p);

    pos = 0;
    fo(i, s2.length())
    {
        if ((int)p[0] >= (int)s2[i])
            pos = i + 1;
        else
            break;
    }
    s2.insert(pos, p);

    cout << min(s1, s2) << endl;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s, p;
        cin >> s;
        cin >> p;

        Smallest_KMP(s, p);
    }

    return 0;
}