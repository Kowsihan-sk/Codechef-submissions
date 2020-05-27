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

        vector<int> arr(N);
        vector<int> te(N);
        int j = 0, count = 0;

        for (int i = 0; i < N; i++)
            cin >> arr[i];

        te[0] = arr[0];

        for (int i = 0; i < N; i++)
        {
            if (arr[i] == te[j])
            {
                continue;
            }
            else
            {
                j++;
                te[j] = arr[i];
            }
        }

        te.erase(te.begin() + ++j, te.end());
        sort(te.begin(), te.end());

        for (int i = 1; i < te.size(); i++)
        {
            if (te[i - 1] == te[i])
            {
                count = 1;
                break;
            }
        }

        if (count != 1)
        {
            sort(arr.begin(), arr.end());
            vector<int> counter(te.size());
            int k = 0;

            counter[0] = 1;
            for (int i = 1; i < arr.size(); i++)
            {
                if (arr[i - 1] == arr[i])
                {
                    counter[k]++;
                }
                else
                {
                    k++;
                    counter[k] = 1;
                }
            }

            sort(counter.begin(), counter.end());

            for (int i = 1; i < te.size(); i++)
            {
                if (counter[i - 1] == counter[i])
                {
                    count = 1;
                    break;
                }
            }
        }

        if (count == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    // your code goes here
    return 0;
}
