#include <stdio.h>

int main() {
	int a[12],i,max=0;
	for(i=0;i<10;i++)
	{
	    scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<10;i++)
	{
	    if(a[i]>max)
	        max=a[i];
	}
	printf("%d",max);
	
	return 0;
}
