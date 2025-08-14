#include <stdio.h>

main() {
    int idade;
    char nome[5];
    float altura;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    printf("Digite seu nome:");
    scanf(" %c,", &nome);

    printf("Digite sua altura:");
    scanf("%f", &altura);

    printf("Seu nome é %s e sua idade %d\n", nome, idade);
    printf("Sua altura é: %.2f\n", altura);
}