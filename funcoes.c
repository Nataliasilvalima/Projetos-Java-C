#include<stdio.h>
#include<stdlib.h>

void le_vetor(char vetor, int v[], int t);
    
int main () {

    int v1[5];
    int v2[10];
    int *vp;
    int p;

    printf("Digite o tamanho do vp:");
    scanf("%d", &p);

    vp = (int*) malloc (p * sizeof(int));

    le_vetor('1',v1, 5);
    le_vetor('2',v2, 10);
    le_vetor('p',vp, p);

    return 0;
}
void le_vetor(char vetor, int v[], int t){
    
    int i;
    printf("Digite os valores para o vetor %c:\n", vetor);
    for (i=0; i<t; i++)
      scanf("%d", &v[i]);  
}