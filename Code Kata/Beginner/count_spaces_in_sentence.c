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
        if(str[i]==' ')
        {
            count=count+1;
        }
    }
    printf("no of spaces:%d",count);
    return 0;
}
