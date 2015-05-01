#include"stdio.h"
#include"math.h"
int main(){
long int n,p[12345],k,i;
scanf("%ld",&n);
k=n;
for(k;k>0;n--){
p[k]=1;
for(i=1;i<=n;i++){
p[k]*=pow(i,i);}
printf("p[%lld]=%ld\n",k,p[k]);
k--;}
return 0;}
