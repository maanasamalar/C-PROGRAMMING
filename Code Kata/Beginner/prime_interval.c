#include<stdio.h>
int main()
{
    int i,flag,l,h;
    scanf("%d",&l);
    scanf("%d",&h);
    while(l<h)
    {
        for(i=2;i<(l/2);i++)
        {
            flag=0;
            if(l%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",l);
            l++;
        }
        
    }
    return 0;

}
