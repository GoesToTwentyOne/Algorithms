/*
- state: stone(n) -> cost of reaching n-th stone from 1st stone
- recurrance: stone(n) = min(  
                            stone(n-1) + abs( h[n] - h[n-1])
                            stone(n-2) + abs( h[n] - h[n-2])
                        )
- base case: stone(1) = 0
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int h[N];
int dp[N];

int stone(int n) {
    if(n == 1) {
        return 0;
    }
    if(dp[n] != -1) {
        return dp[n];
    }
    if(n == 2) {
        dp[n] = stone(n-1) + abs(h[n] - h[n-1]);
        return dp[n];

    }else{
        dp[n] = min(stone(n-1) + abs(h[n] - h[n-1]), stone(n-2) + abs(h[n] - h[n-2]));
        return dp[n] ;
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++) {
        cin >> h[i];
    }

    for(int i = 1 ; i <= n ; i++) {
        dp[i] = -1;
    }
    cout << stone(n) << endl;
    return 0;
}

