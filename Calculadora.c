#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float num1, num2, resultado;
    char continuar;

    do {
        system("clear||cls");
        printf("===============================\n");
        printf("     Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operacao:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida! Digite um numero inteiro de 1 a 5.\n");
            while(getchar() != '\n');
            opcao = 0;
            continue;
        }

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);

            switch (opcao) {
                case 1:
                    resultado = num1 + num2;
                    printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                    break;
                case 2:
                    resultado = num1 - num2;
                    printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
                    break;
                case 3:
                    resultado = num1 * num2;
                    printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
                    break;
                case 4:
                    if (num2 == 0) {
                        printf("Erro: Divisao por zero nao permitida!\n");
                    } else {
                        resultado = num1 / num2;
                        printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
                    }
                    break;
            }
        } else if (opcao == 5) {
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            break;
        } else {
            printf("Opcao invalida! Escolha entre 1 e 5.\n");
        }

        do {
            printf("\nDeseja realizar outra operacao? (s/n): ");
            scanf(" %c", &continuar);

            if (continuar != 's' && continuar != 'S' &&
                continuar != 'n' && continuar != 'N') {
                printf("Resposta invalida! Digite apenas 's' para sim ou 'n' para nao.\n");
            }
        } while (continuar != 's' && continuar != 'S' &&
                 continuar != 'n' && continuar != 'N');

    } while (continuar == 's' || continuar == 'S');

    printf("Obrigado por usar a calculadora! Ate a proxima.\n");
    return 0;
}
