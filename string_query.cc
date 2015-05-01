//user shivamzaz
#include"bits/stdc++.h"
int main(){
long int a[1234],b,p,i,t;
char str[12345],f;
std::vector<char> v;
std::vector<char>::iterator it;
scanf("%s",str);
p=strlen(str);
for(i=0;i<p;i++){
v.push_back(str[i]);}
//for(i=0;i<v.size();i++){printf("%c",v[i]);}
it=v.begin();
scanf("%ld",&t);
while(t--){
long int cnt=0;
scanf("%ld %c",&b,&f);
for(i=0;i<v.size();i++){
if(v[i]==f){
{cnt++;
if(cnt>=b){break;}}}}
//it=v.begin+i;
//printf("%d\n",i);}
v.erase(v.begin()+i);}
for(i=0;i<v.size();i++){
printf("%c",v[i]);}
return 0;}
