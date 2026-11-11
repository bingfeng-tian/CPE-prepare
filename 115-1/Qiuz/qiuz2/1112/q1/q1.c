// 118 Mutant Flatworld Explorers
#include <stdio.h>
#include <stdbool.h>

// 順時針定義：N(0), E(1), S(2), W(3)
const char dir_char[] = {'N', 'E', 'S', 'W'};
const int dx[] = {0, 1, 0, -1};
const int dy[] = {1, 0, -1, 0};

int main() {
    int max_x, max_y;
    if (scanf("%d %d", &max_x, &max_y) != 2) return 0;

    bool scent[55][55] = {false}; // 紀錄哪個座標有掉落氣味
    int x, y;
    char c_dir, cmd[105];

    while (scanf("%d %d %c %s", &x, &y, &c_dir, cmd) == 4) {
        // 1. 將字元方向轉為索引 d (0~3)
        int d = 0;
        for (int i = 0; i < 4; i++) {
            if (dir_char[i] == c_dir) d = i;
        }

        bool lost = false;

        // 2. 遍歷指令字串 cmd
        for (int i = 0; cmd[i] != '\0'; i++) {
            // TODO: 實作 L, R, F 的邏輯與出界/氣味判定
            
        }

        // 3. 輸出結果
        if (lost)
            printf("%d %d %c LOST\n", x, y, dir_char[d]);
        else
            printf("%d %d %c\n", x, y, dir_char[d]);
    }
    return 0;
}