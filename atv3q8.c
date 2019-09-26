#include <stdio.h>
#include <stdlib.h>

int main (){

  float a, b, c;

printf ( " informe o primeiro valor \ n " );
scanf ( " % i " , & a);

printf ( " informe o segundo valor valor \ n " );
scanf ( " % i " , & b);

printf ( " informe o terceiro valor \ n " );
scanf ( " % i " , & c);


 se ((a + b) <c) {
    printf ( " triângulo " );
} mais {
    se ((b + c) <a) {
       printf ( " triângulo " );
    } mais {
        se ((c + a) <b) {
           printf ( " triângulo " );
        } mais {
        printf ( " Nao e triangulo " );
        }
    }
}


retornar  0 ;
}
