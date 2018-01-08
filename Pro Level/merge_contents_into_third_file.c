#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *f1,*f2,*f3;
char c;
f1=fopen("1.txt","r");
f2=fopen("2.txt","r");
f3=fopen("3.txt","w");
if((f1==NULL)||(f2==NULL)||(f3==NULL))
{
	printf("error");
    exit(0);
  }
  while((c=fgetc(f1))!=EOF)
  {
  	fputc(c,f3);
    }
    while((c=fgetc(f2))!=EOF)
    {
    fputc(c,f3);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    }
    return 0;
    }
    
    

