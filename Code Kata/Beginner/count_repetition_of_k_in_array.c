#include<stdio.h>
int main()
{
    int n,k,flag=0,count=0;
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
            count++;
        
        }
        
    }
    printf("%d",count);
    return 0;
    
        
             printf("%d",count);
    
        
       
     
    
}
