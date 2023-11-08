#include<bits/stdc++.h>
using namespace std;
const int N=105;
const int M = 1e5;
int dp[N][M];
int nums[N];
int main(){
    int n,tsum;
    cin>> n>> tsum;
    for( int i=1; i<=n;i++){
        cin>>nums[i];
    }
    dp[0][0]=1;
    for(int i=1;i<=tsum;i++){
        dp[0][i]=0;
    }
    for( int i=1;i<=n;i++){
        for(int target=1;target<=tsum;target++){
            int ans_1=dp[i-1][target];
            if(target<nums[i]){
                dp[i][target]=ans_1;
            }else{
                int ans_2=dp[i-1][target-nums[i]];
                dp[i][target]=ans_1 || ans_2;
            }
        }
    }
    cout<< dp[n][tsum]<<'\n';


}