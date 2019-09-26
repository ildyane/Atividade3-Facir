#include <stdio.h>
#include <stdlib.h>

int main (){

  float salario, venda, valor;
    //atividade 1 exercicio 3
    printf ("ler o salario fixo  \n");
    scanf ("%f", & salario);
    printf ("ler o valor de venda \n" );
    scanf ("%f", & venda);
    if (venda> 1.500,00 ) {
    venda = venda * 5 / 100 ;
     venda = venda * 3 / 100 ;

   printf ("\n salario eh comissao foi: %.2f reais ", salario);

  system("pause");
    }
}
