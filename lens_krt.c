#include"stdio.h"
#include"math.h"
int main(){
long int t,a,b,c,d,r,s,p;
scanf("%ld",&t);
while(t--){
scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
scanf("%ld",&r);
s=(c-a)*(c-a)+(d-a)*(d-a);
p=pow(s,0.5);
if(p>r){
puts("SAFE\n");}
else if(p==r){
puts("JUST MISSED\n");}
else{
puts("REPLANNING\n");}
}
return 0;}
