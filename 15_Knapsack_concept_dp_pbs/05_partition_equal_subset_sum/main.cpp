/*
- state: fun(n, target) -> returns 1 if it is possible to create a subset from numbers
         1 to n and form the sum "target"

- recurrance: fun(n, target) -> fun(n-1, target) OR 
                                fun(n-1, target - nums[n]) if target >= nums[n]

- base_case: fun(0, target) -> 1 if target == 0
                               else 0
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 105;
const int M = 1e5;
int dp[N][M];
int nums[N];
int subsetsum(int n,int tsum){
    if(n==0 && tsum==0) return 1;
    if(n==0 && tsum<0) return 0;
    if(dp[n][tsum] != -1) return dp[n][tsum];
    int ans_1=subsetsum(n-1,tsum);
    if(tsum<nums[n]) {
        dp[n][tsum]=ans_1;
        return ans_1;
    }
    
    int ans_2=subsetsum(n-1,tsum-nums[n]);
    dp[n][tsum]=ans_1 || ans_2;
    return dp[n][tsum];

}

int main(){
    int n, tsum=0;
    cin>> n;
    for( int i=1;i<=n;i++){
        cin>> nums[i] ;
    }
    for(int i=1;i<=n;i++){
        tsum=tsum+nums[i];
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=tsum;j++){
            dp[i][j]=-1;
        }
        
    }

    int final =subsetsum(n,(tsum/2));
    if(tsum %2 != 0 ){
        cout<<"false"<<'\n';
    }else{
        
        if(final == 0){
            cout<<"false"<<'\n';
        }else{
            cout<<"true"<<'\n';
        }
    }


   

}