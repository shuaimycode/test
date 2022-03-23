#include<stdio.h>

int main()

{int a[10];

int b[10];

int i,j,t;

printf("num     score\n");

for(i=0;i<10;i++)

{scanf("%d%d",&b[i],&a[i]);//输入值

printf("\n");}

for(j=0;j<9;j++)

for(i=0;i<9-j;i++)

if(a[i]<a[i+1])

{t=a[i];a[i]=a[i+1];a[i+1]=t;

t=b[i];b[i]=b[i+1];b[i+1]=t;};//将学号和成绩都交换


printf("the sorted is:\n");

for(i=0;i<10;i++)


{printf("%4d%4d",b[i],a[i]);

printf("\n");}//输出整理的数据

printf("\n");

return 0;

}
