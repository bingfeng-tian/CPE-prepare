// 10684 The jackpot
#include <stdio.h>

int main() {
    int N=-1, x;
    int sum, max; 
    while(scanf("%d",&N)==1 && N!=0) {
        sum=0;
        max=0;
        
        for(int i=0;i<N;i++) {
            scanf("%d",&x);
            sum+=x;
            if(sum<0) sum=0;
            if(sum>max) max=sum;
        }
        if(max==0){
            puts("Losing streak.");
        }
        else {
            printf("The maximum winning streak is %d.\n",max);
        }
    }
}