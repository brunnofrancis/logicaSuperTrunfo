
#include <stdio.h>
#include <string.h>

// Definicao da estrutura Carta
typedef struct {
    char nome[50];
    int populacao;
    int area;
    int pib;
    int densidade;
} Carta;

// Funcao para exibir os atributos disponiveis
void exibirAtributosDisponiveis(int escolhido) {
    printf("\nEscolha o atributo para comparar:\n");
    if (escolhido != 1) printf("1. Populacao\n");
    if (escolhido != 2) printf("2. Area\n");
    if (escolhido != 3) printf("3. PIB\n");
    if (escolhido != 4) printf("4. Densidade Demografica\n");
}

int main() {
    // Cartas pre-cadastradas
    Carta carta1 = {"Brasil", 213000000, 8516000, 1847000, 25};
    Carta carta2 = {"Canada", 38000000, 9985000, 1643000, 4};

    int atributo1 = 0, atributo2 = 0;
    int valor1_carta1, valor1_carta2;
    int valor2_carta1, valor2_carta2;
    int soma_carta1, soma_carta2;

    printf("Bem-vindo ao Super Trunfo - Desafio Final!\n");

    do {
        exibirAtributosDisponiveis(0);
        printf("Escolha o primeiro atributo (1-4): ");
        scanf("%d", &atributo1);

        if (atributo1 < 1 || atributo1 > 4) {
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (atributo1 < 1 || atributo1 > 4);

    do {
        exibirAtributosDisponiveis(atributo1);
        printf("Escolha o segundo atributo (1-4): ");
        scanf("%d", &atributo2);

        if (atributo2 < 1 || atributo2 > 4 || atributo2 == atributo1) {
            printf("Opcao invalida ou repetida. Tente novamente.\n");
        }
    } while (atributo2 < 1 || atributo2 > 4 || atributo2 == atributo1);

    switch (atributo1) {
        case 1:
            valor1_carta1 = carta1.populacao;
            valor1_carta2 = carta2.populacao;
            break;
        case 2:
            valor1_carta1 = carta1.area;
            valor1_carta2 = carta2.area;
            break;
        case 3:
            valor1_carta1 = carta1.pib;
            valor1_carta2 = carta2.pib;
            break;
        case 4:
            valor1_carta1 = carta1.densidade;
            valor1_carta2 = carta2.densidade;
            break;
        default:
            printf("Erro inesperado!\n");
            return 1;
    }

    switch (atributo2) {
        case 1:
            valor2_carta1 = carta1.populacao;
            valor2_carta2 = carta2.populacao;
            break;
        case 2:
            valor2_carta1 = carta1.area;
            valor2_carta2 = carta2.area;
            break;
        case 3:
            valor2_carta1 = carta1.pib;
            valor2_carta2 = carta2.pib;
            break;
        case 4:
            valor2_carta1 = carta1.densidade;
            valor2_carta2 = carta2.densidade;
            break;
        default:
            printf("Erro inesperado!\n");
            return 1;
    }

    printf("\nComparando:\n");
    printf("%s vs %s\n", carta1.nome, carta2.nome);

    printf("\nAtributo 1: ");
    switch (atributo1) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Densidade Demografica\n"); break;
    }
    printf("%s: %d\n", carta1.nome, valor1_carta1);
    printf("%s: %d\n", carta2.nome, valor1_carta2);

    printf("\nAtributo 2: ");
    switch (atributo2) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Densidade Demografica\n"); break;
    }
    printf("%s: %d\n", carta1.nome, valor2_carta1);
    printf("%s: %d\n", carta2.nome, valor2_carta2);

    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %d\n", carta1.nome, soma_carta1);
    printf("%s: %d\n", carta2.nome, soma_carta2);

    if (soma_carta1 == soma_carta2) {
        printf("\nResultado: Empate!\n");
    } else {
        printf("\nResultado: ");
        printf("%s venceu!\n", soma_carta1 > soma_carta2 ? carta1.nome : carta2.nome);
    }

    return 0;
}
