#include <stdio.h>

int processar(int numeros[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        if(numeros[i] < 0)
            continue; 

        if(numeros[i] == 0)
            break; 

        if(numeros[i] % 2 == 0)
            return numeros[i] * 2; 
    }
    return -1;
}

int main() {
    int nums[] = {3, -1, 5, 4, 0, 6};
    int resultado = processar(nums, 6);
    printf("Resultado: %d\n", resultado);
    return 0;
}
