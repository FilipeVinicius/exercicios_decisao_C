// Filipe Vinicius Vieira da Silva 10444828

#include <stdio.h>

int main(){

    int ddd;

    printf("Informe o DDD: ");
    scanf("%d", &ddd);

    switch (ddd) {
        case 61: printf("Brasília %d", ddd);
        break;

        case 71: printf("Salvador %d", ddd);
        break;

        case 11: printf("São Paulo %d", ddd);
        break;

        case 14: printf("Bauru %d", ddd);
        break;

        case 21: printf("Rio de Janeiro %d", ddd);
        break;

        case 32: printf("Juiz de Fora %d", ddd);
        break;
        
        case 19: printf("Campinas %d", ddd);
        break;

        case 27: printf("Vitória %d", ddd);
        break;

        case 31: printf("Belo Horizonte %d", ddd);
        break;

        default: printf("Uma cidade no Brasil sem identificação.");

    }
    return 0;
}