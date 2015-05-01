#include"stdio.h"
#include"string.h"
int main(){
int t;
char str[1234];
scanf("%d",&t);
while(t--){
int p,i,sum=0;
scanf("%s",str);
p=strlen(str);
for(i=0;i<p;i++){
if((str[i]==65)||(str[i]==68)||(str[i]==79)||(str[i]==80)||(str[i]==82)){
sum=sum+1;}
else if(str[i]==66){
sum=sum+2;}
}
printf("%d\n",sum);}
return 0;}
