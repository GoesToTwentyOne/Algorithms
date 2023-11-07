/*
- state: stone(n) -> cost of reaching n-th stone from 1st stone
- recurrance: stone(n) = for i = 1 to  k: 
                            min(  
                                stone(n-i) + abs( h[n] - h[n-i])
                            )
- base case: stone(1) = 0



i   <====(i-1), (i-2) ... (i-k)

k = 4

i = 2
2  <=====(2-1), (2-2) ... (2-4)
          1,   0 , -1,  -2
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7;
const int INF =4e8;
int dp[N];
int h[N];
int n,k;
int stone_2(int n){
    if(n==1) return 0;
    if(dp[n]!=-1) return dp[n];
    int ans=INF;
    for(int i=1;i<=k;i++){
        int from_stone=n-i;
        if(from_stone<=0){
            break;
        }
        int candidate_ans=stone_2(from_stone)+ abs(h[n] - h[from_stone]);
        ans=min(ans,candidate_ans);

    }
    dp[n]=ans;
    return ans;

}

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>h[i];
    }
    for(int i=1;i<=n;i++){
        dp[i]=-1;
    }
    cout<<stone_2(n)<<'\n';

}