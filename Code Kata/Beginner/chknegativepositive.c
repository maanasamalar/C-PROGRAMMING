#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n>0)
printf("%d is positive",n);
else if(n<0)
printf("%d is negative",n);
else
printf("given number is zero");
return 0;
}
