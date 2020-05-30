#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;

    while (T--)
    {
        int n, laddu = 0, max = 0;
        string country;
        cin >> n >> country;

        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;

            if (temp == "CONTEST_WON")
            {
                int rank;
                cin >> rank;

                if (rank < 21)
                    laddu += 20 - rank;
                laddu += 300;
            }
            else if (temp == "TOP_CONTRIBUTOR")
                laddu += 300;
            else if (temp == "BUG_FOUND")
            {
                int sev;
                cin >> sev;
                laddu += sev;
            }
            else
                laddu += 50;
        }

        if (country == "INDIAN")
            max = laddu / 200;
        else
            max = laddu / 400;
        cout << max << endl;
    }

    return 0;
}
