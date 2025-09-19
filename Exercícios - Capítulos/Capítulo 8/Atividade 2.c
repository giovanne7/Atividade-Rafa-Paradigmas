#include <stdio.h>

int main() {
    int opcao, n;

    do {
        printf("\nMenu:\n1 - Quadrado\n2 - Fatorial\n3 - Sair\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um numero: ");
                scanf("%d", &n);
                printf("Quadrado: %d\n", n * n);
                break;
            case 2:
                printf("Digite um numero: ");
                scanf("%d", &n);
                int f = 1;
                for(int i = 1; i <= n; i++)
                    f *= i;
                printf("Fatorial: %d\n", f);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 3);

    return 0;
}

