# include  < stdio.h >
# include  < stdlib.h >

// 20) Calcule e escreva a média aritmética dos números pares entre 10 (inclusive) e 100 (inclusive).

int  main ()
{
    int c, cp, s, r; // contador, contador de pares, soma-so, r-resultado.
    c = 10 ;
    cp = 0 ;
    s = 0 ;

    while (c <= 100 )
    {
        if (c% 2 == 0 )
        {
            cp ++;
            s = s + c;
            c ++;
        } mais {
        c ++;
        }
    }
    r = s / cp;
    printf ( " Uma mídia aritmética dos números pares de 10 a 100 e igual a % i . \ n " , r);

    retornar  0 ;
}
