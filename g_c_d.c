#include"stdio.h"
long long int findgcd(long long int ,long long int );
long long int a[100000];
int main(){
int t;
scanf("%d",&t);
while(t--){
long long int l,r,n,i,j,k,s;
     scanf("%lld%lld",&n,&k);
for(i=0;i<n;i++){
   scanf("%lld",&a[i]);}
while(k--){
  long long int gd=0;
      scanf("%lld%lld",&l,&r);
for(i=0;i<n;i++){
  if((i>=(l-1))&&(i<=(r-1))){
  continue;
}
else {gd=findgcd(gd,a[i]);}
}
printf("%lld",gd);
}
}
return 0;}
long long findgcd(long long int n,long long int m)
	{ if(m<=n && n%m == 0)
	   return m;
	  if(n < m)
	   return findgcd(m,n);
	  else
	   return findgcd(m,n%m);
	 }
