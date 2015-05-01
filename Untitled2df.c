#include"stdio.h"
#include"math.h"
long long int factorial(long long int);
int main(){
long long int t,i,a,b,p[123456],j;
scanf("%lld",&t);
while(t--){
long long int cnt=0,d=1;//,e=2,f=3,g=4,h=5,i=6;
scanf("%lld%lld",&a,&b);
for(i=a;i<=b;i++){
p[i]=factorial(i);
}
for(i=a;i<=b;i++){
if(p[i]%1000000==0){
cnt=++cnt+5;}
else if(p[i]%100000==0){
cnt=++cnt+4;}
else if(p[i]%10000==0){
cnt=++cnt+3;}
else if(p[i]%1000==0){
cnt=++cnt+2;}
else if(p[i]%100==0){
cnt=++cnt+1;}
else if(p[i]%10==0){
cnt++;}}
printf("%lld\n",cnt);}
//printf("%lld",cnt);}
/*if(cnt==0){
printf("%lld",cnt);}
else if(cnt!=0){
printf("%lld",cnt);}
else if(d!=1){
printf("%lld",d);}
else if(e!=2){
printf("%lld",e);}
else if(f!=3){
printf("%lld",f);}
else if(g!=4){
printf("%lld",g);
}
else if(h!=5){
printf("%lld",h);
}
else if(i!=6){
printf("%lld",i);}*/

return 0;}
long long int  factorial(long long int n)
{
  long long int c;
  long long int result = 1;

  for (c = 1; c <= n; c++)
    result = result * c;

  return result;
}
