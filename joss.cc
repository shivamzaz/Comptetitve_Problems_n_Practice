#include"bits/stdc++.h"
#include"stdio.h"
using namespace std;
int main(){
int a[1234],p[1234],n,i;
cin>>n;
for(i=0;i<n;i++){
cin>>a[i];}
for(i=0;i<n;i++){
p[i]=a[i];}
sort(p,p+n);
for(i=n-1;i>0;i--){
cout<<p[i]<<" ";}
for(i=n-1;i>=0;i--){
int k=0;
if(a[k]==p[i]){
i-=1;
k++;}
else{
p[i]=a[k];
k++;}
}
for(i=0;i<=n;i++){
cout<<a[i]<<"\n";}
return 0;}
