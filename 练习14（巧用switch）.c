#include<stdio.h>
int main(void)
{
    int score,mark;
    char ch='A';

    printf("Please input score:");
    scanf("%d",&score);
    mark=score<0||score>100?-1:score/10;
    switch(mark)
    {
    default:ch++;

    case 6:ch++;
    case 7:ch++;
    case 8:ch++;
    case 9:
    case 10:

printf("%d--%c",score,ch);


    }
    return 0;
}
