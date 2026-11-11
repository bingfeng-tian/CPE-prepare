// Hashmat the brave warrior
#include "stdio.h"

int main(){
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        printf("%lld\n",llabs(a-b));
    }
    return 0;
}