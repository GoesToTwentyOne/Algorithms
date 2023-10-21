#include<bits/stdc++.h>
using namespace std;
int recur_sum(int n){
    if (n==1){
        return 1;
    }
    return recur_sum(n-1)+n;
}
int main(){
    int n;
    cin>>n;
    cout<<recur_sum(n)<<'\n';
}