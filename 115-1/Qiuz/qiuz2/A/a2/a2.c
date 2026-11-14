// 10056 What is the Probability?
#include <stdio.h>
#include <math.h>

int main() {
    int S;
    scanf("%d",&S);

    int n,i;
    double p;

    while(S--) {
        scanf("%d %lf %d",&n,&p,&i);
        double ans=p*pow(1.0-p,i-1)/(1.0-pow(1.0-p,n));
        printf("%.4f\n",ans);
    }
}