#include"stdio.h"
long int n1,n2;
int main(){
long int t;
scanf("%ld",&t);
while(t--){
long int cnt=0,g=0,n,m,p[12345],i,k=0,f[12345],j=0;
scanf("%ld%ld",&n,&m);
for(i=0;i<=n;i++){
if(i%m==0){
p[k]=i;
cnt++;
k++;}}
for(i=1;i<cnt;i++){printf("%d\n",p[i]);}
for(i=1;i<=cnt;i++){
for(j=i+1;j<=cnt;j++){
if(hcf(p[i],p[j])==2){
g++;}}}
printf("%ld\n",g);}
return 0;}
int hcf(int n1, int n2)
{
    if (n2!=0)
       return hcf(n2, n1%n2);
    else
       return n1;
}
