#include <iostream>
#include <stdlib.h>
using namespace std;

// formula magica
float calcular_nota(float custo, float lucro, float imposto) {
	float valor = (custo + lucro);
	float imposto_rs = (valor * imposto / 100);

	float valor_final = (valor + imposto_rs) / ((100 - imposto) / 100);

	return valor_final;
}

int main(int argc, char** argv) {

	float custo, lucro, imposto, valor_final;

	cout << "\n\tCusto: R$ "; cin >> custo;
	cout << "\n\tLucro desejado: R$ "; cin >> lucro;
	cout << "\n\tImposto (%): "; cin >> imposto;

	valor_final = calcular_nota(custo, lucro, imposto);

	printf("\n\tValor a cobrar: R$ %.2f", valor_final);

	return 0;
}
