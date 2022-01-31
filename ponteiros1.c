#include <stdio.h>

int main () {
    int i; //armazena inteiros comuns
    int *pnt1; //armazena referências (endereços) de inteiros

    float f; //armazena valores de ponto flutuante
    float *pnt2; //armazena referências (endereços) de floats

    printf ("tamanho do i = %d\n", sizeof(i));
    printf ("tamanho do pnt1 = %d\n", sizeof(pnt1));

    printf ("tamanho do f = %d\n", sizeof(f));
    printf ("tamanho do pnt2 = %d\n", sizeof(pnt2));

    i = 45;
    f = 100;
    pnt1 = &i; //operador & = referência
    pnt2 = &f;

    printf ("endereco do i = %p\n", pnt1);
    printf ("endereco do f = %p\n", pnt2);
    return 0;
}