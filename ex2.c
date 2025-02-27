// Filipe Vinicius Vieira da Silva 10444828

#include <stdio.h>

int main(){

    int numero;

    printf("Digite um número para saber se é par ou impar: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("%d é par", numero);
    } else {
        printf("%d é impar", numero);
    }

    return 0;
}