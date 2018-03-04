#include<stdio.h>
int main()
{
int n,dig,count=0;
scanf("%d",&n);
while(n>0)
{
	dig=n%10;
	count++;
	n/=10;
}
printf("%d",count);
return 0;
}
