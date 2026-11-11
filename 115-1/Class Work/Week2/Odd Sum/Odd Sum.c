#include "stdio.h"

int main(){
    int n;
    scanf("%d",&n);

    int cas[n];
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        cas[i] = 0;
        for(int k=a;k<=b;k++){
            if(k%2==1){
                cas[i]+=k;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("Case %d: %d\n", i+1, cas[i]);
    }

    return 0;
}