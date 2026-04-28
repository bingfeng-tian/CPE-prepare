#include <stdio.h>

int main() {
    long long m, n;
    
    while (scanf("%lld %lld", &n, &m) != EOF) {
        // 1. 特判保護：排除小於等於 1 以及 n < m 的不合法狀況（防止除以 0 或 1 的死迴圈）
        if (n <= 1 || m <= 1 || n < m) {
            printf("Boring!\n");
            continue;
        }

        // 2. 測試：tmp 的初始值必須是 n，而不是 m！
        long long tmp = n;
        while (tmp % m == 0) {
            tmp /= m;
        }

        // 如果能一路整除到 1，代表序列合法
        if (tmp == 1) {
            printf("%lld", n);
            while (n > 1) {
                n /= m;
                printf(" %lld", n);
            }
            printf("\n"); // 3. 關鍵修正：印完一組序列一定要換行！
        } else {
            printf("Boring!\n");
        }
    }
    return 0;
}
