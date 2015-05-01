#include"stdio.h"
#include"math.h"
#include"float.h"
//#include"inttypes.h"
int main(){
unsigned long long int h,f,T,x,N,a,q;
double w,e;
scanf("%llu",&T);
while(T--){
scanf("%llu",&N);
a=5*N*N;
x=a+4;
q=a-4;
h=pow(x,0.5);
w=pow(x,0.5);
f=pow(q,0.5);
e=pow(q,0.5);
if((f==e)||(h==w)){
printf("IsFibo\n");}
else
{
printf("IsNotFibo\n");}

}
return 0;}
