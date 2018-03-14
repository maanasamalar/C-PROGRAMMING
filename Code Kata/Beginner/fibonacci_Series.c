#include <stdio.h>

int main() {
	int i,n,m1=1,m2=1,sum=0;
	scanf("%d",&n);
	printf("%d ",m1);
	printf("%d ",m2);
    for(i=1;i<=n-2;i++)
    {
        sum=m1+m2;
        printf("%d ",sum);
        m1=m2;
        m2=sum;
    }
    
	
	return 0;
}
