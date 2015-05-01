#include"stdio.h"
int main(){
long long int t,a,b,s,cnt,l;
scanf("%lld",&t);
while(t--){
long long int p=1,f=0;
scanf("%lld%lld",&a,&b);
l=b-a;
//printf("%lld\n",l);
s=b-a-1;
while(s!=0){
p=p*s;
s--;}
if(p%l==0){
cnt=l-1;
f=1;}
//printf("%lld\n",p);
if(f==0){
while(1){
if(p%l==0){
cnt=l;
break;}
else{
 l--;} }}
 printf("%lld",cnt);
}
return 0;
}
