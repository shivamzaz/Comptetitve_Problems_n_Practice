#include"stdio.h"
long int a[1405],s[1405],p[1345];
int main(){
long int i,j;
int t;
scanf("%d",&t);
while(t--){
long int k,x=0,q,temp,n,y,g,max=0;
scanf("%ld%ld",&n,&g);
s[0]=0^g;
for(i=1;i<=n;i++){
scanf("%ld",&a[i]);
x^=a[i];}
for(i=1;i<=n;i++){
s[i]=a[i]^g;}
k=n+1;
for(i=1;i<=n;i++){
for(j=i+1;j<=n;j++){
if(a[j]!=0){
p[k]=a[i]^a[j];
s[k]=p[k]^g;
k++;}}}
y=((n*(n+1)/2)+1);
//for(i=0;i<((n*(n+1)/2)+1);i++){
//printf("ki4s=%d\n",s[5]);
//}
//printf("%lld\n",x^g);
//for(i=0;i<n*(n+1)/2;i++){printf("%lld\n",s[i]);}
/*for(i=0;i<y;i++){
for(j=i+1;j<y;j++){
if(s[i]>s[j]){
temp=s[i];
s[i]=s[j];
s[j]=temp;}}}
q=(n*(n+1)/2)-1;
//for(i=0;i<(n*(n+1)/2);i++){printf("%lld\n",s[i]);}printf("sex=%lld\n",x);
if(x>s[q]){
}
else
{printf("%lld\n",s[q]);}*/
for(i=0;i<y;i++){if(s[i]>max){max=s[i];}}
if(max>(x^g)){
printf("%ld\n",max);}
else{printf("%ld\n",x^g);}
}
return 0;}
