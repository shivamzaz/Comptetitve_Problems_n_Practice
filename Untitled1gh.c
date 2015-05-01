#include"stdio.h"
#include"math.h"
#define MAX 10000
void factorialof(long long int);
void multiply(long long int);
int length = 0;
int fact[MAX];
//long long int factorial(long long int);
int main(){
long long int t,i,a,b,p[123456],j;
scanf("%lld",&t);
while(t--){
long long int cnt=0,d=1;//,e=2,f=3,g=4,h=5,i=6;
scanf("%lld%lld",&a,&b);
for(j=a;j<=b;j++){
fact[0]=1;
factorialof(j);
for(i=length;i>0;i--){
p[j]=fact[i];}
//p[i]=factorial(i);
printf("%lld\n",p[j]);
}
for(j=a;j<=b;j++){
if(p[j]%1000000==0){
cnt=++cnt+5;}
else if(p[j]%100000==0){
cnt=++cnt+4;}
else if(p[j]%10000==0){
cnt=++cnt+3;
}
else if(p[j]%1000==0){
cnt=++cnt+2;}
else if(p[j]%100==0){
cnt=++cnt+1;}
else if(p[j]%10==0){
cnt++;}}
printf("%lld\n",cnt);}
return 0;}
void factorialof(long long int num){
    int i;
    for(i=2;i<=num;i++){
         multiply(i);
    }
}
void multiply(long long int num){
    long i,r=0;
    int arr[MAX];
    for(i=0;i<=length;i++){
                arr[i]=fact[i];
        }

    for(i=0;i<=length;i++){
         fact[i] = (arr[i]*num + r)%10;
         r = (arr[i]*num + r)/10;
         //printf("%d ",r);
    }
    if(r!=0){
         while(r!=0){
             fact[i]=r%10;
             r= r/10;
             i++;
         }
    }
    length = i-1;
}
