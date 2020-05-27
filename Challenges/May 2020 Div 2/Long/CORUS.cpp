#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, Q;

        cin >> N >> Q;

        string str;
        cin >> str;

        vector<char> v(str.begin(), str.end());
        vector<int> arr(26);

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                if (i == int(v[j] - 97))
                    arr[i]++;
            }
        }

        while (Q--)
        {
            int C, count = 0;
            cin >> C;

            for (int i = 0; i < 26; i++)
            {
                if (arr[i] > C)
                    count += (arr[i] - C);
            }
            cout << count << endl;
        }
    }

    return 0;
}