#include <stdio.h>
#include <stdlib.h>

void le_vetor (char vetor, int v[], int t) {
    int i;
    printf ("digite os valores para o vetor %c:\n", vetor);
    for (i=0; i<t; i++)
        scanf ("%d", &v[i]);
}
int main () {
    int v1[5], v2[10], *vp;
    int p, i;
    printf ("digite o tamanho do vp: ");
    scanf ("%d", &p);
    vp = (int *) malloc (p * sizeof(int));

    printf ("onde comeca o vetor v1: %p\n", v1);
    printf ("onde comeca o vetor v2: %p\n", v2);
    printf ("onde comeca o vetor vp: %p\n", vp);
    le_vetor ('1', v1, 5);
    le_vetor ('2', v2, 10);
    le_vetor ('p', vp, p);
    return 0;
}