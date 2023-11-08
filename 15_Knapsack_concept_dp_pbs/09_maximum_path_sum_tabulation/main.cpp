
#include <bits/stdc++.h>
using namespace std;
const int N = 105;
const int M = 105;
int grid[N][M];
int dp[N][M];

int main()
{
    int row;
    cin >> row;
    int col = row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
        }
    }
    dp[0][0] = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 && j == 0)
                continue;
            if (i > 0 && j > 0)
            {
                int ans_1 = dp[i - 1][j] + grid[i][j];
                int ans_2 = dp[i][j - 1] + grid[i][j];
                dp[i][j] = min(ans_1, ans_2);
            }
            else if (i > 0)
            {
                dp[i][j] = dp[i - 1][j] + grid[i][j];
            }
            else if (j > 0)
            {
                dp[i][j] = dp[i][j - 1] + grid[i][j];
            }
           

            
        }
    }
    cout << dp[row-1][col-1] << '\n';
}