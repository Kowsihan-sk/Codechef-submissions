#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int S, N;
        cin >> S >> N;

        int curr = N;
        if (N % 2)
            curr = N - 1;

        int count = 0;
        while (S)
        {
            int temp = 1;
            if (S >= curr)
            {
                temp = S / curr;
                S = S % curr;
                count += temp;
            }
            else if (S % 2)
            {
                S -= 1;
                count++;
            }
            else
            {
                count++;
                S = 0;
            }
        }
        cout << count << endl;
    }
    return 0;
}
