#include <stdio.h>

int is_prime(int n){
    if(n==0||n==1)return 0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int N;
    scanf("%d",&N);
    char str[2001];
    for(int i=0;i<N;i++){
        scanf("%s",str);
        int count[128]={0};
        for(int j=0;str[j]!='\0';j++){
            count[str[j]]++;
        }
        printf("Case %d: ",i+1);
        int found=0;    // 有沒有找到質數次數
        for(int j=0;j<128;j++){
            if(is_prime(count[j])){
                printf("%c",j);
                found=1;
            }
        }
        if(!found){
            printf("empty");
        }
        printf("\n");

    }
}