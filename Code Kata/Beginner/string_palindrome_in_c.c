#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str1[50],str2[50]={'\0'};
    gets(str1);
    int i,length=0,flag=0;
    for(i=0;str1[i]!='\0';i++)
    {
        length++;
    }
    for(i=length-1;i>=0;i--){
        str2[length-1]=str1[i];
    }
    for(i=0;i<length;i++)
    {
        if(str2[i]==str1[i])
            flag=1;
        else
            flag=0;
    }
    if(flag==1)
    {
        printf("yes...palindrome");
    }
    else
        printf("no......not palindrome");
    return 0;
}
