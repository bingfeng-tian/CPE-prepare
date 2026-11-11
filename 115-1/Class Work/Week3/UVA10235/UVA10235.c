// Simply Emirp
#include "stdio.h"

int is_prime(int n){
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int revers(int n){
    int result=0 ;
    while(n!=0){     
        result*=10;
        result+=n%10;
        n/=10;
    }
    return result;
}

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(is_prime(n)){
            int rev = revers(n);
            if(n!=rev && is_prime(rev)){
                printf("%d is emirp.\n",n);
            }else{
                printf("%d is prime.\n",n);
            }
        }else{
            printf("%d is not prime.\n",n);
        }     
    }
    return 0;
}