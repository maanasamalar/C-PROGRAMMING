#include<stdio.h>
int main()
{
    
    int n,a[50],max,min;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d %d",min,max);
    
    return 0;
    
}
