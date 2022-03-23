#include<stdio.h>
int main(void)
{
    int a[13]={3,4,10,13,33,42,46,63,76,78,95,96,120};
    int low=0;
    int high=12;
    int b,mid,flag;
    scanf("%d",&b);
    do
    {
        mid=(high+low)/2;
        if(b<a[mid])
        {
            high=mid-1;
            flag=0;
        }
        else
            if(b>a[mid])
        {
            low=mid+1;
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }

    }while(low<=high);
    if(flag==0)
    {
        printf("No find %d",b);
    }
    else
    {
        printf("Find");
    }
    return 0;
}
