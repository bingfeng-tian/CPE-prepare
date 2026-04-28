// vua 10189
#include <stdio.h>

int main() {
    int Case = 1;
    int n, m;

    while (scanf("%d %d", &n, &m) != -1) {
        if(n==0||m==0)return 0;
        char field[102][102];

        for (int r = 0; r <= n + 1; ++r) {
            for (int c = 0; c <= m + 1; ++c) {
                field[r][c] = '.';
            }
        }

        for (int r = 1; r <= n; ++r) {
            for (int c = 1; c <= m; ++c) {
                scanf(" %c", &field[r][c]);
            }
        }

        if (Case > 1) {
            printf("\n");
        }

        printf("Field #%d:\n", Case++);
        for (int r = 1; r <= n; ++r) {
            for (int c = 1; c <= m; ++c) {
                if (field[r][c] == '*') {
                    putchar('*');
                } else {
                    int mines = 0;
                    for (int i = r - 1; i <= r + 1; ++i) {
                        for (int j = c - 1; j <= c + 1; ++j) {
                            if (field[i][j] == '*') {
                                ++mines;
                            }
                        }
                    }
                    printf("%d", mines);
                }
            }
            putchar('\n');
        }
    }

    return 0;
}