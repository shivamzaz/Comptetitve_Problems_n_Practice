#include"stdio.h"
#include"math.h"
int main(){
int i,s=1,n;
scanf("%d",&n);
for(i=n;i>0;i--){
s*=pow(i,i);}
printf("%d",s);}
