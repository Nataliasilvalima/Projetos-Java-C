#include <stdio.h>
#include <string.h>
int main(void) {
int N, i=0, j, soma, t_linha;
char linha[60];
scanf("%d", &N);
while(i < N ) {
scanf("%s", linha);
soma = 0;
t_linha = strlen(linha);
for(j = 0 ; j < t_linha; j++) {
if(linha[j] == '1') {
soma +=2;
}
else if(linha[j] == '2' || linha[j] == '3') {
soma += 5;
}
else if(linha[j] == '4') {
soma += 4;
}
else if(linha[j] == '5') {
soma += 5;
}
else if(linha[j] == '6' || linha[j] == '9' || linha[j] == '0') {
soma += 6;
}
else if(linha[j] == '7') {
soma += 3;
}
else {
soma+=7;
}
}
printf("%d leds\n", soma);

}
return 0;
}
