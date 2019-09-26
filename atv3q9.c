#include <stdio.h>
#include <stdlib.h>

int main (){

char time1 [ 15 ], time2 [ 15 ];
    int gol1, gol2;

    printf ( " Insira o nome do primeiro horário: \ n " );
    obtém (& time1);
    printf ( " Insira o nome do segundo tempo: \ n " );
    obtém (& time2);
    printf ( " Quantos gols o tempo % s fez? \ n " , tempo1);
    scanf ( " % i " , & gol1);
    printf ( " Quantos gols o tempo % s fez? \ n " , tempo2);
    scanf ( " % i " , & gol2);

    if (gol1 == gol2)
    {
        printf ( " O jogo foi empatado! \ n % s  % i X % i  % s . \ n " , time1, gol1, gol2, time2);
    } mais {
    if (gol1> gol2)
    {
        printf ( " O tempo do % s venceu! \ n % s  % i X % i  % s \ n . " , tempo1, gol1, gol2, tempo2);
    } mais {
        printf ( " O tempo do % s venceu! \ n % s  % i X % i  % s . \ n " , tempo1, gol1, gol2, tempo2);
    }
    }
    sistema ( " pausa " );
    retornar  0 ;
}
