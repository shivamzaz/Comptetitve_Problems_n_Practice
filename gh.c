
 	#include<stdio.h>
#include<string.h>

main()
{
int t;
scanf("%d",&t);
while(t--){
char a[100],b[100]={0};
//printf("Enter the string\n");
scanf("%s",a);
long int f=strlen(a),cnt=0;
long int i,j,k=0,count=0;
for(i=0;i<f;i++)
{
for(j=0;j<i;j++)
{
if(a[i]==b[j])
{
count=1;
}
}
if(count==0)
{
b[k++]=a[i];

}
count=0;
}

for(j=0;j<strlen(b);j++)
{
cnt++;
}
printf("%ld\n",cnt);}
}
