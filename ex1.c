// Filipe Vinicius Vieira da Silva 10444828

#include <stdio.h>


int main(){
    float num1, num2, num3;

    printf("Digite o numero 1: ");
    scanf("%f", &num1);

    printf("Digite o numero 2: ");
    scanf("%f", &num2);

    printf("Digite o numero 3: ");
    scanf("%f", &num3);

    if (num1 < num2 + num3 && num2 < num1 + num3 && num3 < num1 + num2){
        printf("Triângulo");
    } else {
        printf("Não é triângulo");
    }

    return 0;
}