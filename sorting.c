#include"stdio.h"
int main(){
int a[1234],i,j,t,n;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]>a[j]){
t=a[i];
a[i]=a[j];
a[j]=t;}}}
for(i=0;i<n;i++){
if(a[i]!=a[i+1]){
printf("%d",a[i+1]);
break;}
else
continue;}

return 0;}
