#include<stdio.h>
int main (void)
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("%c",'a'+(ch-'a'+25)%26);
    }
    else
    {


        if(ch>='A'&&ch<='Z')
        {
            printf("%c",'A'+(ch-'A'+25)%26);
        }
        else
        {
            printf("error");

        }
    }
    return 0;
}
