//计算1！+2！+3！+...+10！


#include <stdio.h>

int main(int argc,char argv[])
{
    int i=0,sum=0,result=1;
    for(i=1;i<11;i++)
    {
        result=result*i;
        sum=sum+result;
    }
    printf("%d\n",sum);

    return 0;
}