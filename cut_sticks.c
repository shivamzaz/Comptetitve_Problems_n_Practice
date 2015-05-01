#include"stdio.h"
int main(){
int i,cnt=0,t,min,a[1234];
scanf("%d",&t);
for(i=0;i<t;i++){
scanf("%d",&a[i]);}
//while(cnt!=1){
//int cnt=0;
{
min=a[0];
for(i=0;i<t;i++){
if(min>a[i]){
min=a[i];}}}
printf("%d\n",min);
for(i=0;i<t;i++){
if(a[i]!=0){
  a[i]=a[i]-min;}
       if(a[i]!=0){
            cnt++;}
    }
printf("%d\n",cnt);
//for(i=0;i<t;i++){
//s=s+a[i];}
//int cnt=1;
//}
return 0;}
