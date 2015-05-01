#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
scanf("%d",&t);
while(t--){
long long int n,a[100000],i,d,s=0,cnt=0;
scanf("%lld",&n);
for(i=0;i<n;i++){
scanf("%lld",&a[i]);}

sort(a,a+n);
for(i=n-1;i>=0;i-4){
s+=a[i];}
printf("%d\n",s);
}
return 0;}
