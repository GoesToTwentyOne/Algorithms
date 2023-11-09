/*
- state: dp(n, K) -> number of ways to make sum=K from coins 1 to n without crossing limit
- recurrance: dp(n, K) = dp(n-1, K) + 
                         dp(n-1, K - coin[n]) + 
                         dp(n-1, K - 2 * coin[n]) + 
                         ....
                         dp(n-1, K - limit[n] * coin[n])
- base-case: dp(0, 0) = 1
*/
#include<bits/stdc++.h>
using namespace std;

const int N = 55;
const int M = 1001;
const int MOD = 1000000007;

int dp[N][M];
int limit[N];
int coin[N];

int coin_change(int n, int k) {
    if (n == 0) {
        if (k == 0) return 1;
        return 0;
    }
    if (dp[n][k] != -1) {
        return dp[n][k];
    }
    int ans = coin_change(n - 1, k);
    for (int i = 1; i <= limit[n]; i++) {
        if (k - i * coin[n] < 0) {
            break;
        }
        int ret = coin_change(n - 1, k - i * coin[n]);
        ans = (ans + ret) % MOD;
    }
    dp[n][k] = ans;
    return ans;
}

int main() {
    int test_cases;
    cin >> test_cases;

    for (int t = 1; t <= test_cases; t++) {
        int n, k;
        cin >> n >> k;

        for (int i = 1; i <= n; i++) {
            cin >> coin[i];
        }
        
        for (int i = 1; i <= n; i++) {
            cin >> limit[i];
        }
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= k; j++) {
                dp[i][j] = -1;
            }
        }
        
        cout << "Case " << t << ": " << coin_change(n, k) << '\n';
    }
}
