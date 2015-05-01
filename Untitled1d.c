#include"stdio.h"
#include"math.h"
int main(){
int n;
scanf("%d",&n);
int i = 1, sum = 0;
    while(pow(5,i)<= n)
    {
        sum += n/(pow(5,i));
        i++;
    }
    printf("%d",sum);}
