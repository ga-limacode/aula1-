#include <stdio.h>

int main() {

    int idade;

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    if(idade>=18.0f){
        printf("\nMaior de idade");
        }else
        printf("\n Menor de idade");
    
    return 0;
}
