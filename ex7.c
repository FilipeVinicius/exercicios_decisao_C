// Filipe Vinicius Vieira da Silva 10444828

#include <stdio.h>

int main(){
    int A, B, calculo_dia;
    
    printf("Digite o primeiro ano: ");
    scanf("%d", &A);
    
    printf("Digite o segundo ano: ");
    scanf("%d", &B);

    if (A < B) {
        calculo_dia = 365 * (B-A);
        printf("A diferença de dias entre 01/01/%d e 01/01/%d é: %d", A,B,calculo_dia);
    } else {
        printf("B é maior que A");
    }

    return 0;
}