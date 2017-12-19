#include<stdio.h>
int main()
{
int n,sum=0,rev,temp;
scanf("%d",&n);
temp=n;
while(temp>0)
{
rev=temp%10;
sum=(sum*10)+rev;
temp/=10;
}
if(sum==n)
printf("palindrome");
else
printf("not plaindrome");
return 0;
}

