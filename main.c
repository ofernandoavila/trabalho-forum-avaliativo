#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Arquivo onde está os cálculos
#include "calculos.h"

int main () {
	setlocale(LC_ALL, "");
	
	float salario;
	char nome[500];
	
	printf("Insira o nome do funcionário: ");
	scanf("%[^\n]%*c", nome);
	
	printf("Insira o salário do funcionário: ");
	scanf("%f", &salario);
	
	printf("Nome: %s\n", nome);
	printf("Salário: %.2f\n", salario);
	
	printf("FGTS: %.2f\n", (salario * 0.08));
	printf("INSS: %.2f\n", calcularINSS(salario));
	printf("IRRF: %.2f\n", calcularIRRF(salario));
	 
	system("pause");
}


