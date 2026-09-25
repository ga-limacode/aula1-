#include <stdio.h>

int main() {
    float n1, n2, n3, media, soma;

    printf("Nota 1: ");
    scanf("%f", &n1);
    
    printf("Nota 2: ");
    scanf("%f", &n2);
    
    printf("Nota 3: ");
    scanf("%f", &n3);
    soma = n1 + n2 + n3;
    media = soma / 3;

    printf("Sua média é igual a: %.2f", media);

    if(media>=6.0f){
        printf("\nAluno aprovado");
        }else
        printf("\n Reprovado");
    
    return 0;
}
