#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50};
int i,sum=0;
float avg;
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
sum=sum+a[i];
}
avg=sum/5;
printf("avg is %0.2f",avg);
}
