#include"stdio.h"
#include"string.h"
int main(){
int t;
scanf("%d",&t);
while(t--){
long long int p,i,a[100000],cnt=0;
char str[100000];
scanf("%s",str);
p=strlen(str);
for(i=0;i<p;i++){
a[i]=str[i];}
for(i=1;i<p;i++){
if(a[i]+a[i-1]!=88){cnt++;}
}
printf("%lld\n",cnt/2);}
return 0;}
