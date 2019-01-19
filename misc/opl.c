#include<stdio.h>

int main()
{
    int c, nw;                  /* nw for word & c for character*/
    while ( ( c = getchar() ) != EOF ){
    if ( c != ' ' && c != '\n' && c != '\t')
    nw = c;
    else {
        nw = '\n';
    }

    printf("%c",nw );

    }
return 0;
}
