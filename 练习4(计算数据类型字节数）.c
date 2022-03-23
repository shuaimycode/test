#include<stdio.h>
int main(void)
{
    int a=2.5;
    printf("Data types      Number of bytes\n");
    printf("----------      ---------------\n");
    printf("char            %d\n",sizeof(char));
    printf("int             %d\n",sizeof(int));
    printf("shoat int       %d\n",sizeof(short int));
    printf("long int        %d\n",sizeof(long int));
    printf("long long int   %d\n",sizeof(long long int));
    printf("float           %d\n",sizeof(float));
    printf("double          %d\n",sizeof(double));
    printf("long double     %d\n",sizeof(long double));
    printf("%d\n",sizeof(a));


    return 0;
}
