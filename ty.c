#include"stdio.h"
int main(){
int i,j,a[1234],n;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
for(i=0;i<n;i++){
//int max=0;
/*for(j=i+1;j<n;j++){
if(max<=a[j]){
max=a[j];}*/
//}
//printf("%d\n",max);
m=max(a,n);
if(a[i]<=m){
a[i]=max;}}
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
return 0;}
max(int x[],int k)
    {
    int t,i;
    t=x[0];
    for(i=1;i<k;i++)
    {
    if(x[i]>t)
    t=x[i];
    }
    return(t);
    }
