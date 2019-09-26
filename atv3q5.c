#include <stdio.h>
 #include <stdlib.h>

 int main()
 {
    float a, b, c;

    printf ( " Digite 3 valores: \ n " );
    scanf ( " % i  % i  % i " , & a, & b, & c);
    while (a == b, b == c, a == c)
    {
        printf ( " Os números não podem ser iguais \ n " );
        printf ( " Digite 3 valores: \ n " );
        scanf ( " % i  % i  % i " , & a, & b, & c);
    }
    if (a> b && a> c)
    {
        printf ( " O número % i e o maior. \ n " , a);
    } mais {
    if (a <b && b> c)
    {
        printf ( " O número % i e o maior. \ n " , b);
    } mais {
        printf ( " O número % i e o maior. \ n " , c);
    }
    }
    sistema ( " pausa " );
    retornar  0 ;
