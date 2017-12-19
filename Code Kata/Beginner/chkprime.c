#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i,flag=1;
for(i=2;i<=n/2;i++)
{
	if(n%i==0)
	{
		flag=0;
		printf("not prime");
		break;
	}
}
if(flag==1)
{
	printf("prime");
}

return 0;
}
