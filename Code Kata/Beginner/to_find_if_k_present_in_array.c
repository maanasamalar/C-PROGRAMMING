#include<stdio.h>
int main()
{
    int n,k,flag=0;
    scanf("%d%d",&n,&k);
    int a[50],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   /* for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        
    }*/
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            flag=1;
            break;
        }
        
    }
    
        if(flag==1)
        {
            printf("yes");
        }
        else
            printf("no");
    
    
}
