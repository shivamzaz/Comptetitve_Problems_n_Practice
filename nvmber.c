#include"stdio.h"
#include"string.h"
int main(){
long int t,a[12345];
scanf("%ld",&t);
while(t--){
long int cnt=0,n,j,i;
char str[12345];
scanf("%s",str);
n=strlen(str);
for(i=0;i<n;i++){
a[i]=str[i];}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]==a[j])
{cnt++;
break;}
}}
printf("%ld\n",n-cnt);}
return 0;}
