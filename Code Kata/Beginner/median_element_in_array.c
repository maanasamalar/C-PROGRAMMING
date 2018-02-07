#include<stdio.h>
int main()
{
    int n,a[50],j,temp;
    scanf("%d",&n);
    int i;
    float med;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++){
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    if(n%2==0)
    {
        med=(a[n/2]+a[n/2+1])/2.0;
    }
    else
        med=a[n/2];
    
    printf("\n%0.1f ",med);
    
    
}
