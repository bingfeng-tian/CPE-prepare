// 10041 Vito's family
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b) {
    return (*(int*)a-*(int*)b);
}

int main() {
    int r;
    scanf("%d",&r);
    int n, i;
    while(r--) {
        int ans=0;
        scanf("%d",&n);
        int s[505];
        for(i=0;i<n;i++) {
            scanf("%d",&s[i]);
        }

        qsort(s,n,sizeof(int),cmp);

        int mid = s[n/2];
        for(i=0;i<n;i++) {
            ans+=abs(s[i]-mid);
        }
        printf("%d\n",ans);
    }
}