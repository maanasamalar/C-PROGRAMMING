#include<stdio.h>
int main()
{
    int n,k,temp;
    scanf("%d%d",&n,&k);
  
        temp=n;
        n=k;
        k=temp;

    printf("%d %d",n,k);
    return 0;
    
    
}
