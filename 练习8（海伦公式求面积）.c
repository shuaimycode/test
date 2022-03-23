#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("输入三角形边长值：");
    scanf("%f%f%f",&a,&b,&c);
     s=1.0/2*(a+b+c);                  //或(float)(a+b+c)/2;
    if(a+b>c&&a+c>b&&b+c>a)            //判断三值可构三角形
    {
       area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area=%f",area);
    }
    else
        printf("三角形不存在");
    return 0;
}
