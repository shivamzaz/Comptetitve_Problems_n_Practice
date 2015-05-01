#include"stdio.h"
#include"string.h"
int main(){
long long int k,a,b,t,s,x;
char str[12345];
scanf("%s",str);
k=strlen(str);
scanf("%lld",&t);
while(t--){
scanf("%lld%lld",&a,&b);
s=a%k;
x=b%k;
if(str[s-1]==str[x-1]){
printf("Yes\n");}
else
{printf("No\n");}
}
return 0;}
