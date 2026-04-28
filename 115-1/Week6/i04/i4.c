#include <stdio.h>

// 使用字串讀取二進位，並直接轉換為十進位（支援高達 30 位數）
int strToDec(char s[]) {
    int result = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        // 每往後看一位，原本的結果就乘以 2，再加上當前位元（0 或 1）
        result = result * 2 + (s[i] - '0');
    }
    return result;
}

// 輾轉相除法求最大公因數
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    for (int i = 0; i < N; i++) {
        // 陣列大小給 35，安全容納 30 個字元與結尾符號 \0
        char s1[35], s2[35]; 
        scanf("%s", s1);
        scanf("%s", s2);

        // 將字串轉為十進位數字
        int decA = strToDec(s1);
        int decB = strToDec(s2);

        printf("Pair #%d: ", i + 1);
        
        // 題目要求：若 GCD > 1 輸出 All you need is love!
        if (gcd(decA, decB) > 1) {
            printf("All you need is love!\n");
        } else {
            printf("Love is not all you need!\n");
        }
    }
    return 0;
}
