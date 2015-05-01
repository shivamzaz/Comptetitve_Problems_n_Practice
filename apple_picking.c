#include"stdio.h"
int main(){
int a[1234],t,n,k,i,d;
scanf("%d",&t);
while(t--){
scanf("%d%d",&n,&k);
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
if(n<k){
while(n!=0){
printf("0 ");
n=n-1;}}
else if(k==0){
while(n--){
printf("0 ");}}
else
{for(i=1;i<=k;i++){
printf("%d ",i);}
d=n-k;
while(d--){
printf("%d ",k);}
}}
return 0;}
