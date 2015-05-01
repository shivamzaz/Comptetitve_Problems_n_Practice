#include"stdio.h"
int main(){
int cnt=0,a,i,pnt=0;
scanf("%lld",&a);
for(i=1;i<=a;i++)
{cnt++;}
while(1){
a=a+1;
for(i=0;i<(cnt/2);i++){
if(a[i]==a[cnt-i-1]){
pnt++;
}}if(pnt==cnt/2){break;}
}
return 0;}
