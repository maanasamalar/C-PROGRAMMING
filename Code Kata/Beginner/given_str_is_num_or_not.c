#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,flag=0;
    char str[20];
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if((str[i]>='0') && (str[i]<='9'))
        {
           flag=1;
        }
    
    }
    if(flag==1)
    {
        printf("yes\n");
    }
    else
        printf("no\n");
    return 0;
}
