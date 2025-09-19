#include <stdio.h>

void dobrar_valor(int x) {
    x = x * 2;
    printf("Dentro de dobrar_valor: %d\n", x);
}

int main() {
    int num = 10;
    dobrar_valor(num);
    printf("Depois de dobrar_valor: %d\n", num);
    return 0;
}

//Passagem por valor

#include <stdio.h>

void dobrar_referencia(int *x) {
    *x = (*x) * 2;
    printf("Dentro de dobrar_referencia: %d\n", *x);
}

int main() {
    int num = 10;
    dobrar_referencia(&num);
    printf("Depois de dobrar_referencia: %d\n", num);
    return 0;
}

//Por ponteiros