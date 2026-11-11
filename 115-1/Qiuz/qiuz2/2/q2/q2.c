// 10056 What is the Probability
#include <stdio.h>
#include <math.h>

int main() {
    int S;
    scanf("%d",&S);
    while(S--) {
        int n,i;
        double p;
        scanf("%d %lf %d",&n,&p,&i);

        if(p==0.0) {
            puts("0.0000");
        }
        else {
            double ans;
            ans= p*pow(1.0-p,i-1)/(1.0-pow(1.0-p,n));
            printf("%.4f\n",ans);
        }
    }
}