// 490 Rotating Sentences
#include <stdio.h>
#include <string.h>

int main() {
    char s[105][105]={0};

    int row=0, max=0;
    while(fgets(s[row],sizeof(s[row]),stdin)!=NULL) {
        s[row][strcspn(s[row],"\r\n")]='\0';
        int l=strlen(s[row]);
        if(max<l)max=l;
        row++;
    }

    for(int i=0;i<max;i++) {
        for(int j=row-1;j>=0;j--) {
            if(i<strlen(s[j])) {
                putchar(s[j][i]);
            }
            else {
                putchar(' ');

            }
        }
        puts("");
    }

    return 0;
}