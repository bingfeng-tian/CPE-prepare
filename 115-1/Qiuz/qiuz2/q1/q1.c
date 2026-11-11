// 490 Rotating Sentences
#include <stdio.h>
#include <string.h>

int main() {
    char s[105][105]={0};
    int row=0,mlen=0;
    while(fgets(s[row],105,stdin)!=NULL){
        int l=strlen(s[row])-1;
        s[row][l]='\0';
        s[row][l+1]=0;
        if(l>mlen)mlen=l;
        row++;
    }

    for(int i=0;i<mlen;i++){
        for(int j=row-1;j>=0;j--){
            
            printf("%c",s[j][i]==0? ' ':s[j][i]);
        }
        printf("\n");
    }
}