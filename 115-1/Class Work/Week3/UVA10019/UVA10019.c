// Funny Encryption Method
#include "stdio.h"

int main(){
    int T,N;
    scanf("%d",&T);

    while(T--){
        scanf("%d",&N);
        // to Binary
        int x1 = N;
        int b1 = 0;
        while (x1){
            b1 += x1 & 1;
            x1 >>= 1;
        }
        // to Hex
        int x2 = 0;
        int mul = 1;
        x1 = N;
        while (x1){
            x2 += (x1 % 10) * mul;
            x1 /= 10;
            mul *= 16;
        }
        int b2 = 0;
        while (x2){
            b2 += x2 & 1;
            x2 >>= 1;
        }
        printf("%d %d\n",b1,b2);
    }
}