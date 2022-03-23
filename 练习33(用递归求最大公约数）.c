#include<stdio.h>
int Gcd(int a,int b)
{

    return b?Gcd(b,a%b):a;
}
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c;
    c=Gcd(a,b);
    printf("%d",c);
}
