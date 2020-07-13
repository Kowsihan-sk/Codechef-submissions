#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int k;
        cin >> k;

        vector<vector<char>> board(8);
        int posX = 0, posY = 0;
        for (int i = 0; i < 8; i++)
        {
            board[i] = vector<char>(8);
            for (int j = 0; j < 8; j++)
            {
                board[i][j] = '.';
                k--;
                if (k == 0)
                {
                    posX = i;
                    posY = j;
                }
            }
        }
        board[0][0] = 'O';

        // adding obstacle
        if (posY + 1 < 8)
        {
            int i = posX;
            if (i == 0)
                board[i][posY + 1] = 'X';
            else
            {
                for (int j = posY + 1; j < 8; j++)
                    board[i][j] = 'X';
            }
        }
        if (posX + 1 < 8)
        {
            int i = posX + 1;
            for (int j = 0; j <= posY + 1 && j < 8; j++)
                board[i][j] = 'X';
        }

        // output
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
                cout << board[i][j];
            cout << endl;
        }
    }

    return 0;
}