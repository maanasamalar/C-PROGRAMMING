#include<stdio.h>
int main()
{
int a,sum=0,temp=0;
int i;
scanf("%d",&a);
for(i=0;i<4;i++)
{
sum=(sum*10)+a;
temp+=sum;
}
printf("%d",temp);
return 0;
}
