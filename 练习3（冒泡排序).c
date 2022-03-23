#include <stdio.h>
int main()
{
    int a[10]={23,45,66,46,14,68,49,99,38,90};
    for (int i = 0;i<(10-1);i++)
    {
        for(int j=i+1;j<10;j++)
        {

            if(a[i]<a[j])
            {
                int b=a[i];
                a[i]=a[j];
                a[j]=b;

            }
        }

    }
    for(int i=0;i<10;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}
