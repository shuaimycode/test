
#include<stdio.h>

int main()

{int x;
printf("������༶������\n");
scanf("%d",&x);
int a[x];

int b[x];

int i,j,t;

printf("������ѧ��ѧ�ź����Ӧ��Ӣ��ɼ����м��ÿո��������\n");

for(i=0;i<x;i++)

{scanf("%d%d",&b[i],&a[i]);

printf("\n");}

for(j=0;j<x-1;j++)

for(i=0;i<x-1-j;i++)

if(a[i]<a[i+1])

{t=a[i];a[i]=a[i+1];a[i+1]=t;

t=b[i];b[i]=b[i+1];b[i+1]=t;};


printf("��Ӣ��ɼ��Ӵ�С����Ϊ��\n");

for(i=0;i<x;i++)


{printf("%4d%4d",b[i],a[i]);

printf("\n");}

printf("\n");

return 0;

}



