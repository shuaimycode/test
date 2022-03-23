#include<stdio.h>
//函数功能：用迭代法计算n！
//函数入口参数：用n表示阶乘的阶数
//函数返回值：n！
long Fact(int n)
{
    int i;
    long int result=1;
    if(n<0)
    {
        printf("Input data error!");
    }
    else
    {
        for(i=2; i<=n; i++)
        {
            result*=i;
        }
    }
    return result;
}
int main(void)
{
    int m;
    long ret;
    printf("Please input m:");
    scanf("%d",&m);
    ret=Fact(m);
    printf("%d!=%ld",m,ret);
    return 0;
}
