// uva 10066
#include <stdio.h>
#include <string.h>

// lcs[i][j] 表示 s1 前 i 個元素與 s2 前 j 個元素的最長共同子序列長度。
int lcs[101][101];

int main(void) {
  int s1[101], s2[101];
  int s1n, s2n, ncase = 1;

  while (scanf("%d %d", &s1n, &s2n) == 2) {
    if (s1n == 0 && s2n == 0) {
      break;
    }

    for (int i = 0; i < s1n; i++) {
      scanf("%d", &s1[i]);
    }
    for (int i = 0; i < s2n; i++) {
      scanf("%d", &s2[i]);
    }

    memset(lcs, 0, sizeof(lcs));
    for (int i = 1; i <= s1n; i++) {
      for (int j = 1; j <= s2n; j++) {
        if (s1[i - 1] == s2[j - 1]) {
          lcs[i][j] = lcs[i - 1][j - 1] + 1;
        } else {
          lcs[i][j] = lcs[i - 1][j] > lcs[i][j - 1]
                          ? lcs[i - 1][j]
                          : lcs[i][j - 1];
        }
      }
    }

    printf("Twin Towers #%d\n", ncase++);
    printf("Number of Tiles : %d\n\n", lcs[s1n][s2n]);
  }

  return 0;
}