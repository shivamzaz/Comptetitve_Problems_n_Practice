#include"stdio.h"
#include"math.h"
int main(){
int t;
//char
scanf("%d",&t);
while(t--){
double s=1,cnt=0;
while(1){
int p;
scanf("%d",&p);
if(p==-1){break;}
s=s*p;
cnt++;}
s=s/cnt;
printf("%0.3lf\n",s);}
return 0;}
