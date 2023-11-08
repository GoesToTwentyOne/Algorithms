#include<bits/stdc++.h>
using namespace std;
const int N=105;
const int M=1e5+1;
long long dp[N][M];
int val[N];
int wt[N];
int main(){
    int n,tcap;
    cin>> n>> tcap;
    for(int i=1;i<=n;i++){
        cin>> wt[i]>>val[i];
    }
    for(int i=0;i<=tcap;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int cap=0;cap<=tcap;cap++){
            if(cap<wt[i]){
                dp[i][cap]=dp[i-1][cap];
            }else{
                dp[i][cap]=max(val[i]+dp[i-1][cap-wt[i]],dp[i-1][cap]);
            }
            

        }
    }
    cout<<dp[n][tcap]<<'\n';

}