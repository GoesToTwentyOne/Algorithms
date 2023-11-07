#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
int h[N];
int dp[N];
int main(){
    int n;
    cin>> n;
    for(int i=1; i<=n; i++){
        cin>> h[i];
    }
    dp[1]=0;
    for(int i=2;i<=n;i++){
        if(n==2) dp[i]=dp[i-1]+abs(h[i-1]-h[i]); continue;
        dp[i] =min(dp[i-1]+abs(h[i-1]-h[i]),dp[i-2]+abs(h[i-2]-h[i]));
    }
    cout<<dp[n]<<endl;
    

}