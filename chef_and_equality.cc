#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
scanf("%d",&t);
while(t--){
long long int s,i,n,a[100000];
float sum,g;
scanf("%lld",&n);
for(i=0;i<n;i++){
scanf("%lld",&a[i]);}
for(i=0;i<n;i++){
sum+=a[i];}
s=sum/n;
g=sum/n;
if(s==g){
printf("%lld\n",s);}
else{s+=1;
printf("%lld\n",s);}
}
return 0;}
