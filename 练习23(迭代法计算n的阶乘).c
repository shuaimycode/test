#include<stdio.h>
//�������ܣ��õ���������n��
//������ڲ�������n��ʾ�׳˵Ľ���
//��������ֵ��n��
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
