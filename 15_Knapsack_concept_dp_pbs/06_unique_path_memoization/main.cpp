/*
    - state: f(n, m) -> number of unique paths from (0,0) to (n,m)
    - recurrance: f(n, m) -> f(n-1, m) + f(n, m-1)
    - base case: f(0, 0) = 1
*/
#include<bits/stdc++.h>
using namespace std;
const int N=105;
const int M=105;
int dp[N][M];
int unique_path(int n,int m){
    //1 base case
    if(n==0 && m==0) return 1;
    // if resutl already calculated
    if(dp[n][m] != -1){
        return dp[n][m];
    }
    // calculate result from smaller problem    
    int ans=0;
    if(n>0) ans+=unique_path(n-1,m);
    if(m>0) ans+=unique_path(n,m-1);
    dp[n][m]=ans;
    return ans;
}
int main(){
    int row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            dp[i][j]=-1;
        }
    }
    cout<< unique_path(row-1,col-1)<<endl;
}