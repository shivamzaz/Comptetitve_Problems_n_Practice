#include"stdio.h"
#include"string.h"
//int str_length(char*);
//void reverse(char*);
int is_palindrome(char*);
void copy_string(char*, char*);
void reverse_string(char*);
int string_length(char*);
int compare_string(char*, char*);
int main(){
long long int t,g,sd=0,p[12345],i,d[12345],j,h,result,a;
char str[12345],b[12345],o[12345],f[12345];
scanf("%lld",&t);
while(t--){
scanf("%s",str);
g=strlen(str);
a=g/2;
for(i=0;i<g;i++){
p[i]=str[i];}
//strcpy(b,str);
result = is_palindrome(str);

   if ( result == 1 ){
printf("0\n");
}
else{ if((g%2)==0){
for(i=0;i<a;i++){
d[i]=p[g-(i+1)]-p[i];}
j=a;
while(j--){
sd=sd+d[j];}
}
else{
for(i=0;i<a;i++){
d[i]=p[g-i-1]-p[i];}
h=a;
while(h--){
sd=sd+d[h];}}
printf("%lld",sd);}
}return 0;
}

 int is_palindrome(char *str)
{
   int check, length;
   char *reverse;

   length = str_length(str);
   reverse = (char*)malloc(length+1);

   copy_str(reverse, str);
   reverse_str(reverse);

   check = compare_str(str, reverse);

   free(reverse);

   if ( check == 0 )
      return 1;
   else
      return 0;
}

int str_length(char *str)
{
   int length = 0;

   while(*str)
   {
      length++;
      str++;
   }

   return length;
}

void copy_str(char *target, char *source)
{
   while(*source)
   {
      *target = *source;
      source++;
      target++;
   }
   *target = '\0';
}

void reverse_str(char *str)
{
   int length, c;
   char *begin, *end, temp;

   length = str_length(str);

   begin = str;
   end = str;

   for ( c = 0 ; c < ( length - 1 ) ; c++ )
       end++;

   for ( c = 0 ; c < length/2 ; c++ )
   {
      temp = *end;
      *end = *begin;
      *begin = temp;

      begin++;
      end--;
   }
}

int compare_str(char *first, char *second)
{
   while(*first==*second)
   {
      if ( *first == '\0' || *second == '\0' )
         break;

      first++;
      second++;
   }
   if( *first == '\0' && *second == '\0' )
      return 0;
   else
      return -1;
}
