#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> A(n), B(n);
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < n; i++)
            cin >> B[i];

        long long A_pos = 0, B_pos = 0, wD = 0;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            A_pos += A[i];
            B_pos += B[i];

            if (A_pos == B_pos)
            {
                if (flag)
                {
                    wD += A[i];
                }
                flag = true;
            }
            else
            {
                flag = false;
            }
        }

        cout << wD << endl;
    }

    return 0;
}