#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        string S;
        cin >> S;

        vector<char> goal(S.begin(), S.end());

        int r_shotsB = n, r_shotsA = n, aScore = 0, bScore = 0;
        int max_shots = 0;

        for (int i = 0; i < goal.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (goal[i] == '1')
                    aScore++;

                r_shotsA--;
            }
            else
            {
                if (goal[i] == '1')
                    bScore++;

                r_shotsB--;
            }
            if ((aScore - bScore > r_shotsB) || (bScore - aScore > r_shotsA))
            {
                max_shots = i + 1;
                break;
            }
        }

        if (max_shots == 0)
            max_shots = 2 * n;

        cout << max_shots << endl;
    }
    return 0;
}
