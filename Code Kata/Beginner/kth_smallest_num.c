#include<stdio.h>
int main()
{
    int n,k,temp;
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
   for(i=1;i<=n;i++)
   {
       if(a[i]>a[i+1])
       {
           temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
       }
   }
   for(i=1;i<=n;i++)
   {
       if(i==k-1)
       {
           printf("%d",a[i]);
       }
   }
    return 0;
    
        
       
     
    
}
