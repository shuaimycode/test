#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("���������α߳�ֵ��");
    scanf("%f%f%f",&a,&b,&c);
     s=1.0/2*(a+b+c);                  //��(float)(a+b+c)/2;
    if(a+b>c&&a+c>b&&b+c>a)            //�ж���ֵ�ɹ�������
    {
       area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area=%f",area);
    }
    else
        printf("�����β�����");
    return 0;
}
