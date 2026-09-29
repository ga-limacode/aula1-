// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    float nota;
    int contador = 0, i;

    for(i = 1; i <= 5; i++) {
        printf("Digite a %d nota: ", i);
        scanf("%f", &nota);

        if(nota >= 6) {
            contador++;
        }
    }

    printf("notas maiores ou iguais a 6: %d\n", contador);

    return 0;
}
