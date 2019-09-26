#include <stdio.h>
#include <stdlib.h>

int main (){

  float v1, v2, v3;

printf ( " informe o primeiro número \ n " );
scanf ( " % i " , & v1);

printf ( " informe o segundo número \ n " );
scanf ( " % i " , & v2);

printf ( " informe o terceiro número? \ n " );
scanf ( " % i " , & v3);

if (v1 && v2> v3) {
    printf ( " a soma dos dois maiores % i \ n " , (v1 + v2));
} mais {
    if (v2 && v3> v1) {
    printf ( " a soma dos dois maiores % i \ n " , (v3 + v2));

    } mais {
        printf ( " a soma dos dois maiores % i \ n " , (v3 + v1));
    }
}

system("pause");
retornar  0 ;
}
