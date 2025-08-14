#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];
    
    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("Cadastro do aluno:\nNome: %sIdade: %d\nAltura: %.2f\nMatricula: %d\n", nome, idade, altura, matricula);
    
    return 0;
}