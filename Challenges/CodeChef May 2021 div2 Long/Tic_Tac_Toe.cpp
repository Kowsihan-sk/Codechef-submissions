/** Author : S Kowsihan **/
#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define endl "\n"
#define f(a, b, c) for (ll i = a; i < b; i += c)
typedef vector<ll> vl;
#define fo(i, a, b, c) for (ll i = a; i < b; i += c)

int main()
{
    fast;

    ll TT;
    cin >> TT;

    while (TT--)
    {
        vector<string> grid(3);
        f(0, 3, 1) cin >> grid[i];

        ll a_win = 0, b_win = 0, count_x = 0, count_o = 0;
        ll da1 = 0, da2 = 0, db1 = 0, db2 = 0;
        set<ll> a, b;
        f(0, 3, 1)
        {
            ll x1 = 0, x2 = 0, y1 = 0, y2 = 0;
            // row column check + count
            fo(j, 0, 3, 1)
            {
                if (grid[i][j] == 'X')
                    count_x++, x1++;
                else if (grid[i][j] == 'O')
                    count_o++, y1++;
                if (grid[j][i] == 'X')
                    x2++;
                else if (grid[j][i] == 'O')
                    y2++;
            }
            a.insert(x1), a.insert(x2), b.insert(y1), b.insert(y2);

            // for diagonals
            if (grid[i][i] == 'X')
                da1++;
            else if (grid[i][i] == 'O')
                db1++;
            if (grid[i][2 - i] == 'X')
                da2++;
            else if (grid[i][2 - i] == 'O')
                db2++;
        }
        a.insert(da1), a.insert(da2), b.insert(db1), b.insert(db2);

        if (a.count(3))
            a_win = 1;
        if (b.count(3))
            b_win = 1;
        ll f = a_win > b_win ? 1 : 0, es = (9 - (count_x + count_o)) % 2;

        // if empty space
        // both W
        if (a_win && b_win)
            cout << 3 << endl;
        // 1 W
        else if ((a_win || b_win) && ((f && (count_x == (count_o + 1))) || ((!f) && (count_x == count_o))))
            cout << 1 << endl;
        // no W
        else if (!a_win && !b_win && (count_o + count_x != 9) && ((es && (count_x == count_o)) || ((!es) && (count_x == (count_o + 1)))))
            cout << 2 << endl;
        // if no empty space
        else if ((count_x + count_o == 9) && ((count_x == 5) && (count_o == 4)) && (!b_win))
            cout << 1 << endl;
        else
            cout << 3 << endl;
    }

    return 0;
}