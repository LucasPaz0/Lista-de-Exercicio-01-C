#include <stdio.h>

int main() {
    int n;
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    int i = 1; 
    printf("Sequência crescente com %d termos:\n", n);

    while (i <= n) {
        printf("%d ", i);
        i++; 
    }

    printf("\n");  

    return 0;
}