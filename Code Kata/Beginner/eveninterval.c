#include<stdio.h>
int main()
{
int int1,int2,i;
scanf("%d",&int1);
scanf("%d",&int2);
for(i=int1+1;i<=int2;i++)
{
	if(i%2==0)
	{
		printf("%d\n",i);
	}
}
return 0;
}
