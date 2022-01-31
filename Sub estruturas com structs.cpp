#include<stdio.h>

//Criando um tipo de struct para ser puxado dentro de outro struct
typedef struct Data{
	int dia;
	int mes;
	int ano;
}Data; 

//struct principal
struct aluno{
	int id;
	Data nascimento;
};

int main(){

struct aluno aluno1;

aluno1.id = 20;	
aluno1.nascimento.ano = 1992;
aluno1.nascimento.dia = 16;
aluno1.nascimento.mes = 02;
	
	printf("Nascido em: %d/ %d/ %d", aluno1.nascimento.dia, aluno1.nascimento.mes,aluno1.nascimento.ano);
		
	return 0;
}
