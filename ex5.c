
// Filipe Vinicius Vieira da Silva 10444828
#include <stdio.h>

int main(){
    int horas, tirar_20;
    float acrescimo;

    printf("Digite a quantidade de horas utilizadas: ");
    scanf("%d", &horas);

    
    if (horas <= 20){
        printf("Valor básico: R$30,00", horas);
    } else {
        tirar_20 = horas - 20;
        acrescimo = 30 + tirar_20 * 0.10;
        printf("Valor aumentado: %.2f", acrescimo); 
    }   
    return 0;
}