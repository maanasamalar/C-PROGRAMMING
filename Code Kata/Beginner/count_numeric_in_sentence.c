#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,count=0;
    char str[50];
  scanf("%[^\n]s",str);
    len=strlen(str);
    for(i=0;i<len;i++){
       /* count++;
    }
    for(i=0;i<len;i++)
    {*/
        if(str[i]>='1' && str[i]<='9')
        {
            count=count+1;
        }
    }
    printf("numbers count:%d",count);
    return 0;
}
