#include <stdio.h>
#include "funcs.h"

int main()
{
	int numero, expoente, opcao, resultado;

	printf("digite 1 para calculo fatorial ou 2 para numero elevado a expoente: ");
	scanf("%d", &opcao);

	if (opcao == 1) {
		printf("qual o numero para fatorar? ");
		scanf("%d", &numero);
		resultado = funcaofatorial(numero);
	} else {
		printf("digite o numero e depois o expoente: ");
		scanf("%d %d", &numero, &expoente);
		resultado = funcaoexpoente(numero, expoente);
	}
	printf("o resultado foi: %d ", resultado);
}
 
