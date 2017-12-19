#include<stdio.h>
int main()
{
char c;
scanf("%c",&c);
if((c>='a' && c<='z') || (c>='A' && c<='Z'))
printf("alphabet");
else
printf("its a number or a special character");
return 0;
}
