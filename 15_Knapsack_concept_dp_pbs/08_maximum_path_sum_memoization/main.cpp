#include<bits/stdc++.h>
using namespace std;
const int N=105;
const int M=105;
int grid[N][M];
int dp[N][M];
int unique_path(int n,int m){
    // Base case
    if(n == 0 && m == 0) return grid[0][0];
    // If result already calculated
    if(dp[n][m] != -1) {
        return dp[n][m];
    }
    // Calculate result from smaller problems
    if (n > 0 && m > 0) {
        int ans_1 = unique_path(n - 1, m) + grid[n][m];
        int ans_2 = unique_path(n, m - 1) + grid[n][m];
        dp[n][m] = min(ans_1, ans_2); 
    } else if (n > 0) {
        dp[n][m] = unique_path(n - 1, m) + grid[n][m];
    } else if (m > 0) {
        dp[n][m] = unique_path(n, m - 1) + grid[n][m];
    }
    return dp[n][m];
}
int main(){
    int row;
    cin>>row;
    int col=row;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            dp[i][j]=-1;
        }
    }
    cout<< unique_path(row-1,col-1)<<endl;
}
