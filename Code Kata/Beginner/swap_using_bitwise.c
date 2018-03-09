#include<stdio.h>
int main()
{
    int n,k,temp;
    scanf("%d%d",&n,&k);
    n=n^k; // n=n+k;
    k=n^k; // k=n-k;
    n=n^k; //n=n-k;
    printf("%d %d",n,k);
    return 0;
    
    
}
