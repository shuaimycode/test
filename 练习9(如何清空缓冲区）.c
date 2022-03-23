#include<stdio.h>
int main()
{
    int num;
    char ch;
    scanf("%d",&num);
    while (getchar() != '\n'); //使用getchar不断获取缓冲区内的内容，直到缓冲区内空为止   或使用  setbuf(stdin, NULL); 使stdin输入流由默认缓冲区转为无缓冲区
    scanf("%c",&ch);
    printf("hello word\n");
    return 0;
}
