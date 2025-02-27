//Filipe Vinicius Vieira da Silva 10444828

#include <stdio.h>

int main(){
    float altura1, altura2, altura3;
    char nome1[40], nome2[40], nome3[40];

    printf("Digite o nome da pessoa 1: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = 0;
    
    printf("Digite o nome da pessoa 2: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    printf("Digite o nome da pessoa 3: ");
    fgets(nome3, sizeof(nome3), stdin);
    nome3[strcspn(nome3, "\n")] = 0;
    
    printf("Digite a altura da pessoa 1: ");
    scanf("%f", &altura1);

    printf("Digite a altura da pessoa 2: ");
    scanf("%f", &altura2);

    printf("Digite a altura da pessoa 3: ");
    scanf("%f", &altura3);

    if (altura1 < altura2 && altura3){
        printf("Menor pessoa: %s com %.2f", nome1, altura1);
    } else if (altura2 < altura1 && altura3) {
        printf("Menor pessoa: %s com %.2f", nome2, altura2);
    } else {
        printf("Menor pessoa: %s com %.2f", nome3, altura3);
    }

    return 0;
}