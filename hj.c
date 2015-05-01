#include"stdio.h"
#include"string.h"
int main(){
int cnt=0,n,i,a[12334];
char str[1234];
scanf("%s",str);
n=strlen(str);
for(i=0;i<n;i++){
a[i]=str[i];}
for(i=0;i<n;i++){
if(a[i]%n!=a[i+1]){
cnt++;}}
printf("%d",cnt);
}
