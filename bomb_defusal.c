#include"stdio.h"
int main(){
int t;
scanf("%d",&t);
while(t--){
long long cnt,a[100000],b[100000],s=1,j,n,i;
scanf("%lld",&n);
cnt=n;
for(i=0;i<n;i++){
scanf("%lld%lld",&a[i],&b[i]);}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if((a[i]==a[j])||(b[i]==b[j])){
cnt=cnt-1;}}}
printf("%lld\n",cnt);
}
return 0;}
