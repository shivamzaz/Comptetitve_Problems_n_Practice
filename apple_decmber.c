#include"stdio.h"
long long int a[12345];
int main(){
int t;
scanf("%d",&t);
while(t--){
long long int n,i,j,g,b=0,temp;
long long int cnt=0;
scanf("%lld",&n);
for(i=0;i<n;i++){
scanf("%lld",&a[i]);}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;}}}
for(i=0;i<n;i++){
if(a[i]!=a[i+1]){cnt++;}
}
printf("%lld\n",cnt);
}
return 0;}
