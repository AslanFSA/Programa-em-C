#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Inicializa variáveis
	int n, y, result = 0;
	
	// Pergunta a tabuada
	printf("Qual tabuada deseja ?\n");
	scanf("%i",&y);
	
	// Criar tabuada
	for (n = 0; n <= 30; n++) {
		result = n * y;
		printf("%i x %i = %i\n", y, n, result);
	}
}
