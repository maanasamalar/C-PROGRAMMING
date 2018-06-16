#include<stdio.h>
int main()
{
    int n,digit,count=0;
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        count++;
        n/=10;
    }
    printf("%d",count);
    return 0;
    
}
