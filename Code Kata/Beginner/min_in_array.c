#include<stdio.h>
int main()
{
    int n,a[50];
    scanf("%d",&n);
    int i,min;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        
        if(min>a[i])
        {
            min=a[i];
           // break;
        }
    }
    printf("%d",min);
    return 0;
}
