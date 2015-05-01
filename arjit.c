#include"stdio.h"
long int n1,n2;
int main(){
long int t;
scanf("%ld",&t);
while(t--){
long int a,b,i,j,p[12345],g=0;
scanf("%ld%ld",&a,&b);
for(i=1;i<=a;i++){
p[i]=i;}
for(i=1;i<=a;i++){
for(j=i+1;j<=a;j++){
if(hcf(p[i],p[j])==b){
g++;}}}
printf("%ld",g+1);
}
return 0;}
int hcf(int n1, int n2)
{
    if (n2!=0)
       return hcf(n2, n1%n2);
    else
       return n1;
}
