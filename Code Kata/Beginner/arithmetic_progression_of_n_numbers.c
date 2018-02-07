#include<stdio.h>
int main()
{
    int n,a,d,i;
    scanf("%d%d%d",&n,&a,&d);
    int sum,res;
    sum=(n*(2*a+(n-1)*d))/2;
    res=a+(n-1)*d;
    for(i=a;i<=res;i=i+d)
    {
        if(i==res)
        {
            printf("%d",sum);
        }
    }
    return 0;
}
