#include"stdio.h"
int main(){
int t;
scanf("%d",&t);
while(t--){
long long int a,b,c,d,e,f,s[100000],i,j,temp;
scanf("%lld%lld",&a,&b);
scanf("%lld%lld%lld",&c,&d,&e);
s[0]=a*c+b*d;
s[1]=a*c+b*c+b*e;
s[2]=a*d+b*d+a*e;
for(i=0;i<3;i++){
for(j=i+1;j<3;j++){
if(s[i]>s[j]){
temp=s[i];
s[i]=s[j];
s[j]=temp;}}}
printf("%lld",s[0]);}
return 0;}
