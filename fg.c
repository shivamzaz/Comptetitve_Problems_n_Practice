#include"stdio.h"
#include"math.h"
int main(){
long long int t;
scanf("%lld",&t);
while(t--){
long long int a,i,b,d,cnt=0;
double s;
scanf("%lld%lld",&a,&b);
for(i=a;i<=b;i++){
d=pow(i,0.5);
s=pow(i,0.5);
if(d==s){cnt++;}
}
printf("%lld\n",cnt);}
return 0;}
