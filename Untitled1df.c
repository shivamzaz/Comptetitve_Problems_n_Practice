#include"stdio.h"
#include"string.h"
int main(){
int i,d,cnt=0;
char h,l;
char a[]="1lll1l1l1l1ll1l111ll1l1ll1l1ll1ll111ll1ll1ll1l1ll1ll1ll1ll1lll1l1l1l1l1l1l1l1l1l1l1l1ll1lll1l111ll1l1l1l1l1";
d=strlen(a);
for(i=0;i<d;i++){
if(a[i]==l){
cnt++;}
}
printf("%d\n%d",cnt,d);
return 0;}
