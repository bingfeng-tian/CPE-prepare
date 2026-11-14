// 10222 Decode the mad men
#include <stdio.h>
#include <string.h>

int main() {
    char kb[] = "`1234567890-="
                "qwertyuiop[]\\"
                "asdfghjkl;'"
                "zxcvbnm,./";
    
    int c;
    while((c=getchar())!=EOF) {
        if(c==' '||c=='\n') {
            putchar(c);
        }
        else {
            char *p = strchr(kb,c);
            if(p==NULL) {
                putchar(c);
            }
            else {
                putchar(*(p-2));
            }
        }
    }
}