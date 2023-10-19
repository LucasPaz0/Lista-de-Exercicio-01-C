#include <stdio.h>

int main() {
    float preco, percentual, preco_final;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    if (preco < 100) {
        percentual = 20; 
    } else {
        percentual = 10;
    }

    preco_final = preco + (preco * percentual / 100);

    printf("Preço original: R$ %.2f\n", preco);
    printf("Percentual de aumento: %.2f%%\n", percentual);
    printf("Preço final: R$ %.2f\n", preco_final);

    return 0;
}
