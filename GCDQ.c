#include <stdio.h>

long long int a[100001];

long long int compute_gcd(long long int, long long int);

int main() {
    long long int t;
    scanf("%lld", &t);
    while(t--) {
        long long int n, q, i, gcd=0, l, r;
        scanf("%lld%lld", &n, &q);
        for(i=0;i<n;i++) {
            scanf("%lld", &a[i]);
        }
        while(q--) {
            gcd=0;
            scanf("%lld%lld", &l, &r);
            for(i=0;i<n;i++) {
                if(i>=(l-1)&&i<=(r-1)) {
                    continue;
                }
                else {
                    gcd=compute_gcd(gcd, a[i]);
                }
            }
            printf("%lld\n", gcd);
        }
    }
    return 0;
}

long long int compute_gcd(long long int x, long long int y) {
    if(y==0)
        return x;
    else
        return compute_gcd(y, x%y);
}
