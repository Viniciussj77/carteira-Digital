#include <stdio.h>

struct Carteira {
    float saldo;
    int tipo;
};

int main(void) {

    struct Carteira carteira;

    printf("===== CARTEIRA DIGITAL =====\n");

    printf("Digite o saldo da carteira: R$ ");
    scanf("%f", &carteira.saldo);

    printf("\n===== TIPO DE CARTEIRA =====\n");
    printf("01 - Corrente\n");
    printf("02 - Salario\n");
    printf("03 - Poupanca\n");

    printf("\nEscolha o tipo da carteira: ");
    scanf("%d", &carteira.tipo);

    printf("\n===== DADOS DA CARTEIRA =====\n");

    printf("Saldo: R$ %.2f\n", carteira.saldo);

    switch (carteira.tipo) {

        case 1:
            printf("Tipo: Corrente\n");
            break;

        case 2:
            printf("Tipo: Salario\n");
            break;

        case 3:
            printf("Tipo: Poupanca\n");
            break;

        default:
            printf("Tipo de carteira invalido!\n");
    }

    return 0;
}