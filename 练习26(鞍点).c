#include<stdio.h>
int main()
{
	int n=5,i,j,count=0;

	int a[n][n];
    int b[n][n];//����һ����������

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
            b[i][j]=0;//������鶼Ϊ0
		}
	}

	int x;


	for(i=0;i<n;i++)
	{
		x=0;
		for(j=1;j<n;j++)
		{
			if(a[i][j]>a[i][x])
			x=j;
		}//�ҵ��������ֵ�±�
        for(j=0;j<n;j++)
        {
            if(a[i][j]==a[i][x])
            b[i][j]++;
        }//�����е����ֵ����һ
	}
    	for(i=0;i<n;i++)
	{
		x=0;
		for(j=1;j<n;j++)
		{
			if(a[j][i]<a[x][i])
			x=j;
		}//�ҵ�������Сֵ�±�
        for(j=0;j<n;j++)
        {
            if(a[j][i]==a[x][i])
            b[j][i]++;
        }//�����е���Сֵ����һ
	}
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i][j]==2)//�жϸ������������Ƿ�Ϊ2�����Ϊ2��Ϊ���㡣
            {
            printf("[%d,%d,%d]",i,j,a[i][j]);
            count++;//�����ж��ް���ʱ
            }
        }
    }
    if(count==0)
    printf("NONE");


	return 0;

}
