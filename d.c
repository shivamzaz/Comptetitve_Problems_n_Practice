#include"stdio.h"
#include"math.h"
int main(){
long long int t,p=0,n,d,b,i;
scanf("%lld",&t);
while(t--){
scanf("%lld",&n);
d=pow(2,(n-1));
//printf("%d\n",n);
while(n!=0)
{p=p+n;
n--;}
printf("%d\n",n);
b=p*d;
printf("%lld",b);}
return 0;
}
