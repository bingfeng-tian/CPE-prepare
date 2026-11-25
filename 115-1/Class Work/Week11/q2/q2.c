// 10550
#include <stdio.h>

int main() {
    int s, a, b, c;
    while (scanf("%d %d %d %d", &s, &a, &b, &c) == 4 && (s || a || b || c)) {
        int ticks = 0;
        ticks += (s - a + 40) % 40; // 順時針到第 1 碼
        ticks += (b - a + 40) % 40; // 逆時針到第 2 碼
        ticks += (b - c + 40) % 40; // 順時針到第 3 碼

        printf("%d\n", 1080 + ticks * 9);
    }
    return 0;
}