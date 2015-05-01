#include"stdio.h"
#include"string.h"
#include"stdlib.h"
long int a[12345];
int main(){
long int t,d,i;
char str[12345];
scanf("%ld",&t);
while(t--){
long int cnt=0;
scanf("%s",str);
d=strlen(str);
for(i=0;i<d;i++){
a[i]=str[i];}
for(i=0;i<d;i++){
if(a[i+1]!=0){
if(a[i]==a[i+1]){
cnt++;}}}
printf("%ld\n",cnt);
}
return 0;}
