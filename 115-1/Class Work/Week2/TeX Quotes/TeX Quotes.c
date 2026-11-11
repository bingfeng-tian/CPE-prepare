#include "stdio.h"

int main() {
    char c;
    int count = 0;
    
    // 不斷讀取字元，直到遇到檔案結尾 (EOF)
    while ((c = getchar()) != EOF) {
        if (c == '"') {
            count++;
            if (count % 2 == 1) {
                printf("``"); 
            } else {
                printf("\"");
            }
        } else {
            printf("%c", c);
        }
    }

    return 0;
}