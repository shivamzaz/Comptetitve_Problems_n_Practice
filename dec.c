#include"stdio.h"
int main(){
long long int t;
scanf("%lld",&t);
while(t--){
long long int max=0,z=1,cnt=0,pnt=0,p,a[1345],n,i,j;
scanf("%lld\n",&n);
p=n-1;
for(i=0;i<=p;i++){scanf("%lld",&a[i]);}
for(i=0;i<=p;i++){
if(a[i]>max)
{max=a[i];}
}
//printf("%lld\n",max);
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]==a[j]){
cnt++;}
else{pnt++;}}}
//printf("%lld\n",cnt);
//if(cnt!=0){
if(cnt!=0&&cnt%max==0){
printf("%lld\n",z);
}
else{printf("%lld\n",n-cnt);}
}
return 0;}
