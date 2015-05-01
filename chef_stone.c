#include"stdio.h"
int main(){
int t;
scanf("%d",&t);
while(t--){
long long int a[100000],b[100000],i,j,n,k,p[100000];
scanf("%lld%lld\n",&n,&k);
for(i=0;i<n;i++){
scanf("%lld",&a[i]);}
for(j=0;j<n;j++){
scanf("%lld",&b[j]);}
for(i=0;i<n;i++){
a[i]=k/a[i];
}
for(i=0;i<n;i++){
p[i]=a[i]*b[i];
}
long long int max=0;
for(i=0;i<n;i++){
if(p[i]>max){
max=p[i];}}
printf("%lld\n",max);}
return 0;}
