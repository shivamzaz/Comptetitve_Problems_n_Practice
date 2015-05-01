#include"stdio.h"
int main(){
long int t,n,a[1234],i,cnt=0;
scanf("%ld",&t);
scanf("%ld",&n);
while(t--){
for(i=0;i<t;i++){
scanf("%ld",&a[i]);
if(a[i]==n){
cnt++;}
}
}
if(cnt!=0){printf("YES");}
else{printf("NO");}
return 0;}
