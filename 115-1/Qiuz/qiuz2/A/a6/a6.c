// 374 Big Mod
#include <stdio.h>

typedef long long ll;

ll bigmod(ll b, ll p, ll m) {
    ll ans=1%m;
    b%=m;
    while(p>0) {
        if(p&1){
            ans=(ans*b)%m;
        }
        b=(b*b)%m;
        p>>=1;
    }
    return ans;
}

int main() {
    long long B,P,M;

    while(scanf("%lld %lld %lld",&B,&P,&M)!=EOF) {
        ll R=bigmod(B,P,M);
        printf("%lld\n",R);
    }
}