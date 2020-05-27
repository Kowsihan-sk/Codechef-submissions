#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;

    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> pos(N);
        vector<int> v(N - 1);
        vector<int> count(N - 1);

        for (size_t i = 0; i < N; ++i)
            cin >> pos[i];

        for (int i = 1; i < N; i++)
        {
            int distance = pos[i] - pos[i - 1];
            if (distance <= 2)
                v[i - 1] = 1;
            else
                v[i - 1] = 0;
        }

        int d = 0, temp = 1, minimum = 3, flag = 1;
        count[0] = 0;

        if ((v[0] == 0) || (v[N - 2] == 0))
            minimum = 1;
        for (int j = 0; j < N - 1; j++)
        {
            if (v[j] == 1)
            {
                count[d]++;
                temp = 1;
                flag = 1;
            }
            else
            {
                if (count[d] != 0)
                {
                    d++;
                    count[d] = 0;
                    flag = 0;
                }
                if (minimum != 1)
                {
                    if (temp == 0)
                        minimum = 1;
                    else
                        temp = 0;
                }
            }
        }

        if (flag == 1)
            d++;

        count.erase(count.begin() + d, count.end());
        int maximum = *max_element(count.begin(), count.end()) + 1;
        if (minimum != 1)
            minimum = *min_element(count.begin(), count.end()) + 1;

        cout << minimum << " " << maximum << endl;
    }

    return 0;
}