#include <stdio.h>

int main() {
    int i = 1;
    goto check;

loop:
    printf("%d\n", i);
    i++;

check:
    if (i <= 10)
        goto loop;

    return 0;
}

//Versão Original

#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

//Versão com While

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    return 0;
}

//Versão com For
