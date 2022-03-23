
#include<stdio.h>

int main()

{int x;
printf("请输入班级人数：\n");
scanf("%d",&x);
int a[x];

int b[x];

int i,j,t;

printf("请输入学生学号和其对应的英语成绩（中间用空格隔开）：\n");

for(i=0;i<x;i++)

{scanf("%d%d",&b[i],&a[i]);

printf("\n");}

for(j=0;j<x-1;j++)

for(i=0;i<x-1-j;i++)

if(a[i]<a[i+1])

{t=a[i];a[i]=a[i+1];a[i+1]=t;

t=b[i];b[i]=b[i+1];b[i+1]=t;};


printf("按英语成绩从大到小排序为：\n");

for(i=0;i<x;i++)


{printf("%4d%4d",b[i],a[i]);

printf("\n");}

printf("\n");

return 0;

}



