#include<stdio.h>
int main()
{
    int fh,fm,sh,sm,res,r1,r2,min,sec;
    scanf("%d %d",&fh,&fm);
    scanf("%d %d",&sh,&sm);
    if(fh>sh)
        sh=sh+12;
    r1=(fh*60)+fm;
    r2=(sh*60)+sm;
    res=r2-r1;
    min=res/60;
    sec=res%60;
    printf("%d:%d",min,sec);
    return 0;
}
