#include"stdio.h"
int main(){
int a[123],n,i;
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++){

if(i%3==0){
a[i]=0;}

}

for(i=1;i<=n;i++){
printf("%d\n",a[i]);}
}
