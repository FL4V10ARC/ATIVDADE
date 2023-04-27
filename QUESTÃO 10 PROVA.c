#include <stdio.h>

int main() {
    int idade;
    
    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    if (idade > 25) {
        printf("Maior de 25 anos.\n");
    } else if (idade < 25) {
        printf("Menor de 25 anos.\n");
    } else {
        printf("Idade de 25 anos.\n");
    }

    return 0;
}