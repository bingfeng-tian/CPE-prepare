// 10082 WERTYU
#include <stdio.h>
#include <string.h>

int main() {
    char kb[] = "`1234567890-="
                "QWERTYUIOP[]\\"
                "ASDFGHJKL;'"
                "ZXCVBNM,./";

    int c;
    while((c=getchar())!=EOF) {
        if(c==' '||c=='\n') {
            putchar(c);
        }
        else {
            char *p=strchr(kb,c);
            if(p!=NULL) {
                putchar(*(p-1));
            }
            else {
                putchar(c);
            }
        }
    }
}