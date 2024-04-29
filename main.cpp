#include <iostream>

float calcular_nota(float custo, float lucro, float imposto) {
	float valor = custo + lucro;
	float imposto_rs = valor * imposto / 100;
	
	float valor_final = (valor + imposto_rs) / ((100 - imposto) / 100);
	
	return valor_final;
}

int main(int argc, char** argv) {
	
	float custo, lucro, imposto, valor_final;
	
	do {
		printf("Digite o custo: R$");
		scanf("%f", &custo);
	} while (custo < 0);
	
	do {
		printf("Digite o lucro desejado: R$");
		scanf("%f", &lucro);
	} while (lucro < 0);
	
	do {
		printf("Digite o total de imposto em %: ");
		scanf("%f", &imposto);
	} while (imposto < 0);
	
	valor_final = calcular_nota(custo, lucro, imposto);
	
	printf("\nValor a cobrar: R$ %.2f", valor_final);
	
	return 0;
}
