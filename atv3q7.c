#include <stdio.h>
#include <stdlib.h>

int main (){

  float a, b, c;

    printf ( " Digite 3 valores: \ n " );
    scanf ( " % i  % i  % i " , & a, & b, & c);
    while (a == b, b == c, a == c)
    {
        printf ( " Os números não podem ser iguais. \ n " );
        printf ( " Digite 3 valores: \ n " );
        scanf ( " % i  % i  % i " , & a, & b, & c);
    }
    if (a <b && b <c)
    {
        printf ( " % i , % i , % i . \ n " , a, b, c);
    } mais {
    if (a <b && b> c && a <c)
    {
        printf ( " % i , % i , % i . \ n " , a, c, b);
    } mais {
    if (a <b && b> c && a> c)
    {
        printf ( " % i , % i , % i . \ n " , c, a, b);
    } mais {
    if (a> b && b> c)
    {
        printf ( " % i , % i , % i . \ n " , c, b, a);
    } mais {
    if (a> b && b <c && a> c)
    {
        printf ( " % i , % i , % i . \ n " , b, c, a);
    } mais {
        printf ( " % i , % i , % i . \ n " , b, a, c);
    }
    }
    }
    }
    }

sistema ( " pausa " );
retornar  0 ;
}
