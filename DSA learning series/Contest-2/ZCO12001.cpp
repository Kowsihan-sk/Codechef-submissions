#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxdepth = 0, count = 0, depth = 0, maxlen = 0, pos = 0, len = 0, poslen = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count++;
        if (count > maxdepth)
        {
            maxdepth = count;
            depth = i + 1;
        }
        if (arr[i] == 2)
            count--;
        if (count == 0)
        {
            len = i - pos + 1;
            if (len > maxlen)
            {
                maxlen = len;
                poslen = pos + 1;
            }
            pos = i + 1;
        }
    }
    cout << maxdepth << " " << depth << " " << maxlen << " " << poslen << endl;

    return 0;
}
