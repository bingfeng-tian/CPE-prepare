// Vito's family
#include "stdio.h"
#include "stdlib.h"

int main(){
    int N,R,add[500];
    scanf("%d",&N);

    while(N--){
        scanf("%d",&R);
        
        for(int i=0;i<R;i++){
            scanf("%d",&add[i]);
        }

        for(int i=0;i<R-1;i++){
            for(int j=0;j<R-1-i;j++){
                if(add[j]>add[j+1]){
                    int t=add[j];
                    add[j]=add[j+1];
                    add[j+1]=t;
                }
            }
        }
        int mid=add[R/2];
        int sum=0;

        for(int i=0;i<R;i++){
            sum+=abs(add[i]-mid);
        }
        printf("%d\n",sum);
    }
    return 0;
}