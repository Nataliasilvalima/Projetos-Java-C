#include <stdio.h>
void linha(void); //prot�tipo da fun��o
int main() {
linha();
printf("\n\t\t\t\tUm programa em C\n");
linha();
return 0;
}
void linha() {
int i;
for(i = 1; i <= 80; i++)
putchar('-');
}
