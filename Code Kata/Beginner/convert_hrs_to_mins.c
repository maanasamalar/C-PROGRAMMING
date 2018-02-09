#include<stdio.h>
int main()
{
    int min,min1,sec;
    scanf("%d",&min);
    int hrs;
    hrs=min/60;
    min1=min%60;
    printf("%d:",hrs);
    if(min1>60)
    {
     sec=min1%60;
     min1=min1-sec;
    }
   printf("%d: %d",min1,sec);
    
    
}
