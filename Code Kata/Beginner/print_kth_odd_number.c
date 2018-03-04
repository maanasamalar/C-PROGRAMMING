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
        if(a[k]%2!=0)
        {
            flag=1;
        
        }
        
    }
    if(flag==1)
        printf("%d",a[k]);
    else
        printf("%d",a[k-1]);
    return 0;
    
        
       
     
    
}
