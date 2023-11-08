/*
    - state: knapsack(n, cap) -> maximum profit considering objects 1 to n and capacity=cap
    - recurrance: 
        knapsack(n, cap) -> max {
                                val[n] + knapsack(n - 1, cap - wt[n]),
                                knapsack(n - 1, cap)
                            }
    - base_case: knapsack(0, x) = 0
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 105;
const int  M = 1e5+5;
int wt[N];
int val[N];
long long dp[N][M];

long long knapsack_01(int n, int cap) {
    if (n == 0) {
        return 0;
    }
    if (dp[n][cap] != -1) {
        return dp[n][cap];
    }
    if (cap < wt[n]) {
        dp[n][cap] = knapsack_01(n - 1, cap);
        return dp[n][cap];
    }
    long long ans_1 = val[n] + knapsack_01(n - 1, cap - wt[n]);
    long long ans_2 = knapsack_01(n - 1, cap);
    dp[n][cap] = max(ans_1, ans_2);
    return dp[n][cap];
}

int main() {
    int n, cap;
    cin >> n >> cap;
    for (int i = 1; i <= n; i++) {
        cin >> wt[i] >> val[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= cap; j++) {
            dp[i][j] = -1;
        }
    }
    cout << knapsack_01(n, cap) << '\n';
}
