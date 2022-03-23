#include<stdio.h>
int main()
{
	int n=5,i,j,count=0;

	int a[n][n];
    int b[n][n];//声明一个辅助数组

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
            b[i][j]=0;//令辅助数组都为0
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
		}//找到行中最大值下标
        for(j=0;j<n;j++)
        {
            if(a[i][j]==a[i][x])
            b[i][j]++;
        }//让所有的最大值都加一
	}
    	for(i=0;i<n;i++)
	{
		x=0;
		for(j=1;j<n;j++)
		{
			if(a[j][i]<a[x][i])
			x=j;
		}//找到列中最小值下标
        for(j=0;j<n;j++)
        {
            if(a[j][i]==a[x][i])
            b[j][i]++;
        }//让所有的最小值都加一
	}
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i][j]==2)//判断辅助数组中数是否为2，如果为2则为鞍点。
            {
            printf("[%d,%d,%d]",i,j,a[i][j]);
            count++;//计数判断无鞍点时
            }
        }
    }
    if(count==0)
    printf("NONE");


	return 0;

}
