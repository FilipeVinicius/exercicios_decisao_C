
// Filipe Vinicius Vieira da Silva 10444828

#include <stdio.h>

int main(){
    int numero_1, numero_2, diferenca;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero_1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero_2);

    if (numero_1 > numero_2) {
        diferenca = numero_1 - numero_2;
        printf("Diferença de n1 e n2: %d", diferenca);
    } else if (numero_2 > numero_1) {
        diferenca = numero_2 - numero_1;
        printf("Diferença de n2 e n1: %d", diferenca);
    } else {
        diferenca = numero_1 - numero_2;
        printf("Valores iguais: diferença igual a: %d", diferenca);
    }

    return 0;
}