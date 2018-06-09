#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    scanf("%s",str1);
    scanf("%s",str2);
    int n1,n2,i;
    n1=strlen(str1);
    n2=strlen(str2);
    for(i=0;i<n2;i++){
        str1[n1]=str2[i];
        n1++;
    }
    printf("%s",str1);
    return 0;
    
}
