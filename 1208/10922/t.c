// 10922
#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    // 修正 1：s 不用加 &，且條件是 s[0] != '0'
    while (scanf("%s", s) != EOF && s[0] != '0') {
        int l = strlen(s);
        int degree = 1, sum = 0;

        // 修正 2：先把字串的每一位數加總到 sum
        for (int i = 0; i < l; i++) {
            sum += s[i] - '0';
        }

        // 修正 3：先判斷是不是 9 的倍數
        if (sum % 9 != 0) {
            printf("%s is not a multiple of 9.\n", s);
            continue;
        }

        // 計算 9-degree
        while (sum > 9) {
            int next_sum = 0;
            // 修正 4：這裡要用 while，才能把每一位數都拆出來
            while (sum > 0) {
                next_sum += sum % 10;
                sum /= 10;
            }
            sum = next_sum;
            degree++;
        }

        // 修正 5：輸出結果
        printf("%s is a multiple of 9 and has 9-degree %d.\n", s, degree);
    }

    return 0;
}