#include"stdio.h"
int main(){
int t,M,N,a[1234],i,j,s;
scanf("%d",&t);
while(t--){
int c=0,pnt=0,cnt=0;
scanf("%d%d",&M,&N);
for(i=0;i<N;i++){
scanf("%d",&a[i]);}
for(i=0;i<N;i++){
for(j=i+1;j<N;j++){
if(a[i]==a[j]){
pnt++;}
else
{cnt++;
}}if(1){
break;}}
//printf("%d\n",cnt);
if(pnt!=0){
c=1;}
s=c+cnt;
if(pnt==0){
//c=1;
s=s+1;}
printf("%d",s);
}
return 0;}
