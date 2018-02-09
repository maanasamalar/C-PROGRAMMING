#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d %d",a[i],i);
    }
    return 0;
    
}
