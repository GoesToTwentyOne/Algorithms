#include<bits/stdc++.h>
using namespace std;
int dp[101];
int fibo(int n){
    if(n<=2) return 1;
    if(dp[n] !=-1) return dp[n];
    dp[n]=fibo(n-1)+fibo(n-2);
    return dp[n];
}
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    dp[i]=-1;
}
cout<<fibo(n)<<endl;
}