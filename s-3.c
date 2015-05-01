#include"stdio.h"
#include"math.h"
int main(){
int t,f,p[1234],q[1234];
//char
scanf("%d",&f);
while(f--){
scanf("%d",&t);
int s=0,i,j,a=0,cnt=0,l;
for(i=0;i<t;i++){scanf("%d",&p[i]);
}
for(i=0;i<t;i++){scanf("%d",&q[i]);
}
for(i=0;i<t;i++){
for(j=0;j<t;j++){
if(p[i]<q[j]){cnt++;break;}}}
//l=a-s;
//if(l==0){printf("%d",t);}
{printf("%d\n",t-cnt);}}
return 0;}
