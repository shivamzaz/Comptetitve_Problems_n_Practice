#include"stdio.h"
#include"string.h"
#include"stdlib.h"
int main(){
long int i,t,a[12345];
char str[12345];
scanf("%ld",&t);
while(t--){
long int cnt=0,p=0,f=0;
scanf("%s",str);
//a[0]=str[0];
//printf("%d\n",a[0]);
p=strlen(str);
for(i=0;i<p;i++)
{
a[i]=str[i];}
for(i=0;i<p;i++){
if(a[i+1]!=NULL){
if(a[i]+a[i+1]==131){
cnt++;}}
//i++;
}
printf("%d\n",cnt);
f=p-2*cnt;
if(cnt==p-1){printf("0\n");}
else if(f==1){
if(a[p-1]+a[p-2]==131){printf("0\n");}
else{printf("%ld\n",f);}}
else if(cnt==0){printf("%ld\n",abs(f-1));}
else{if(abs(f)==cnt){printf("0\n");}
else{printf("%ld\n",abs(f));}}
}
return 0;}
