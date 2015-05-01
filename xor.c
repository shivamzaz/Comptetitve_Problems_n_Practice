#include <stdio.h>
int main() {
    int n, m;
    long long int max=0, i, j, res;
    scanf("%d%d", &m, &n);
    for(i=m;i<=n;i++) {
        for(j=m;j<n;j++) {
            res=i^j;
            if(res>max)
                max=res;
        }
    }
    printf("%lld\n", max);
    return 0;
}
