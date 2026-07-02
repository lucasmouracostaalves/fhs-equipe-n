#include <stdio.h>

int main() {

int qtd, i;

unsigned long long fatorial = 1;

do {

printf("Digite a quantidade de produtos distintos do kit: ");

scanf('%d", &qtd);

if (qtd < 0) {

printf("Erro: nao sao permitidos numeros negativos. Tente novamente.\n\n");

}

} while (qtd < 0);

for (i = 1; i <= qtd; i++) {

fatorial *= i;

}

printf("As formas distintas sao ao todo %llu\n", fatorial);

return 0;