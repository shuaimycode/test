#include<stdio.h>
int main()
{
    int num;
    char ch;
    scanf("%d",&num);
    while (getchar() != '\n'); //ʹ��getchar���ϻ�ȡ�������ڵ����ݣ�ֱ���������ڿ�Ϊֹ   ��ʹ��  setbuf(stdin, NULL); ʹstdin��������Ĭ�ϻ�����תΪ�޻�����
    scanf("%c",&ch);
    printf("hello word\n");
    return 0;
}
