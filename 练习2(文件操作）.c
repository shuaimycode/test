#include<stdio.h>
#include<stdlib.h>
#define N 40
int  main( )
{
    char  ch ;
    char a[N]="avasxcncnnc",b[N];
    long  n = 0 ;
    FILE  *fp ;
     if( ( fp = fopen( "letter.txt", "w" ) ) == NULL )
    {
        printf( "Cannot open file! \n" ) ;
        exit( 0 ) ;
    }

    fputs(a,fp);
    fclose( fp ) ;
    if( ( fp = fopen( "letter.txt", "r" ) ) == NULL )
    {
        printf( "Cannot open file! \n" ) ;
        exit( 0 ) ;
    }
    fgets(b,N,fp);
    puts(b);
    printf("\n");
     fclose( fp ) ;
     if( ( fp = fopen( "letter.txt", "r" ) ) == NULL )
    {
        printf( "Cannot open file! \n" ) ;
        exit( 0 ) ;
    }
    while(ch=fgetc(fp)!=EOF)
    {
        ch =fgetc(fp);

        if( ch == 'c' )  n++ ;
    }
    printf( "n=%ld\n", n ) ;
    fclose( fp ) ;
    return 0 ;
}
