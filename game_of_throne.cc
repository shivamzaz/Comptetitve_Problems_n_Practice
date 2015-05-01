//#include"stdio.h"
//#include"string.h"
#include"bits/stdc++.h"
using namespace std;
int main(){
long long int a[100000],i,j,cnt=0,p;
char str[100000];
scanf("%s",str);
p=strlen(str);
for(i=0;i<p;i++){
a[i]=str[i];}
sort(a,a+p);
for(i=0;i<p;i++){
for(j=i;j<p;j++){
if(str[i]==str[j]){
cnt++;
i=cnt;}}}
if(cnt%2!=0){//printf("%d",cnt);
printf("YES\n");}
else{//printf("%d",cnt);
printf("NO\n");}
return 0;}
