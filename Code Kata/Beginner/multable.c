#include<stdio.h>
int main()
{
int num,res;
scanf("%d",&num);
int i;
for(i=1;i<=num;i++)
{
res=num*i;
printf("%d*%d=%d\n",num,i,res);
}

return 0;
}

