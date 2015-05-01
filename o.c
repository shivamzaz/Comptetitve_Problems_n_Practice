#include"stdio.h"
int main(){
int t,p[1234],a[1234],i,j,max=0;
scanf("%d",&t);
for(i=0;i<t;i++){
scanf("%d",&a[i]);}
for(i=0;i<t;i++){
for(j=i+1;j<t;j++){
if(a[i]-a[j]+1>=0){
p[i]=(a[i]-a[j]+1);}
}}
for(i=0;i<t;i++){
if(p[i]>max){
max=p[i];}}
printf("%d",max);}
