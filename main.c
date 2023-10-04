#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {
    char operacao;
    float num1, num2, resultado;

    do {
        printf("Escolha uma operacao (+, -, *, /) ou 'q' para sair: ");
        scanf(" %c", &operacao);

        if (operacao == 'q') {
            break;
        }

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        switch (operacao) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
                resultado = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    printf("Erro: divisao por zero!\n");
                    continue;
                }
                break;
            default:
                printf("Operacao invalida!\n");
                continue;
        }

        printf("O resultado da operacao %c e %.2f\n", operacao, resultado);

    } while (1);

    return 0;
}

