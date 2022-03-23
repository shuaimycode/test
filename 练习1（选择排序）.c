#include<stdio.h>
#define N 10
int main(){
    int a[N];
    int i,j,temp;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    printf("\n");
    for(i=0;i<N-1;i++)
        for(j=0;j<N-i-1;j++)
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    for(i=0;i<N;i++)
        printf("%5d",a[i]);
    printf("\n");
    return 0;
}




