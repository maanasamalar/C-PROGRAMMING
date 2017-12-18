#include<stdio.h>
void main()
{
int a,b;
scanf("%d %d",&a,&b);
int sum=0,sub,mul,div,mod;
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
printf("%d,%d,%d,%d,%d",sum,sub,mul,div,mod);
}
