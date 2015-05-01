#include"stdio.h"
#include"string.h"
int main(){
int t;
scanf("%d",&t);
while(t--){
long long int a[100000],i,cnt=0,q,f,s;
double g,p;
char str[100000];
scanf("%s",str);
p=strlen(str);//printf("%f\n",p);
f=p;
q=p;
g=p/2;
s=p/2;
//printf("%d %f",s,g);
for(i=0;i<p;i++){
a[i]=str[i];}
if(g==s){//printf("ok\n");
for(i=0;i<s;i++){
if((a[2*i]+a[2*i+1])!=88){cnt++;
}}
for(i=0;i<s;i++){if((a[2*i]!=a[0])&&(a[2*i+1]!=a[1])){cnt++;}}
printf("%lld\n",cnt);}
else{//printf("ok\n");
for(i=0;i<s;i++){
if((a[2*i]+a[2*i+1])!=88){cnt++;}}
//if(a[f-1]!=a[0]){cnt++;}
printf("%lld\n",cnt);}
}
return 0;}
