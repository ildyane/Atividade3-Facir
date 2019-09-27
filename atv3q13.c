# include  < stdio.h >
# include  < stdlib.h >


/> = 9 A
/> = 7,5 e <9 B
/> = 6 e <7,5 C
/ <6 D
* /


int  main ()
{
    float ma, eu, n1, n2, n3;

    printf ( " Insira suas 3 notas e a mídia de exercícios: \ n " );
    scanf ( " % f% f% f% f " , & n1, & n2, & n3, & me);
    ma = (n1 + (n2 * 2 ) + (n3 * 3 ) + me) / 7 ;
    se (ma> = 9 )
    {
        printf ( " Conceito A. \ n " );
    } mais {
    if (ma> = 7,5 && ma < 9 )
    {
        printf ( " Conceito B. \ n " );
    } mais {
    if (ma> = 6 && ma < 7,5 )
    {
        printf ( " Conceito C. \ n " );
    } mais {
        printf ( " Conceito D. \ n " );
    }
    }
    }
sistema ( " pausa " );
retornar  0 ;
}
