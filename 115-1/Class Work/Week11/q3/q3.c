// 11364
#include <stdio.h>

int main() {
    int t, n, x;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        int min_pos = 100;
        int max_pos = -1;

        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x<min_pos) min_pos = x;
            if (x>max_pos) max_pos = x;
        }

        int ans = 2*(max_pos-min_pos);
        printf("%d\n", ans);
    }
    return 0;
}