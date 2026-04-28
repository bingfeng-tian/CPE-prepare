#include <stdio.h>

int dp[7500] = {0};

int main() {
    int coins[5] = {1, 5, 10, 25, 50};
    
    dp[0] = 1;

    for (int i = 0; i < 5; i++) {
        int coin = coins[i];
        for (int j = coin; j <= 7489; j++) {
            dp[j] += dp[j - coin];
        }
    }

    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%d\n", dp[n]);
    }

    return 0;
}
