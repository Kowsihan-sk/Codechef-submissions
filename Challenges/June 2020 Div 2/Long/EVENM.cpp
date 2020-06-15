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

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        vector<vector<int>> mat(n);
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            mat[i] = vector<int>(n);
            if (i % 2 == 0)
                for (int j = 0; j < n; j++)
                    mat[i][j] = k++;
            else
                for (int j = n - 1; j >= 0; j--)
                    mat[i][j] = k++;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << mat[i][j] << " ";
            cout << "\n";
        }
    }
    return 0;
}
