// uva374
#include <stdio.h>

typedef long long ll;

ll bigMod(ll B,ll P, ll M){
    if(P==0)return 1;
    else if(P%2==0){
        ll tmp=bigMod(B,P/2,M)%M; 
        return (tmp*tmp)%M;
    }
    else{
        ll tmp=bigMod(B,P/2,M)%M; 
        return (B*tmp*tmp)%M;
    }
}

int main(){
    long long B,P;
    int M;

    while(scanf("%lld %lld %d",&B,&P,&M)!=EOF){
        printf("%lld\n",bigMod(B,P,M));
    }
    

}