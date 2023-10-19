#include <stdio.h>

int main() {
    int n, soma = 0; 
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    printf("Sequência decrescente com %d termos:\n", n);

    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
        soma += i; 
    }

    printf("\n");
    printf("A soma de todos os termos da sequência é: %d\n", soma);

    return 0;
}