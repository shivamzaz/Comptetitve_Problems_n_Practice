#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
scanf("%d",&t);
while(t--){
long long int k=0,x=0,h=0,i,p,cnt[100000],a[100000];
char str[100000];
scanf("%s",str);
p=strlen(str);
for(i=0;i<p;i++){
a[i]=str[i];}
sort(a,a+p);
for(i=0;i<p;i++){
cnt[i]=1;}
for(i=1;i<p;i++){
if(a[i]==a[i-1]){
cnt[k]++;}
else{
cnt[k++];}}
sort(cnt,cnt+k+1);
//for(i=k;i>0;i--){int h=0;cnt[k]=cnt[h];h++;}
//{for(i=0;i<=k;i++){printf("%lld\n",cnt[i]);}}
for(i=0;i<k;i++){
x+=cnt[i];}
if(cnt[k]==x){
printf("YES\n");}
else{
printf("NO\n");}
}
return 0;}
