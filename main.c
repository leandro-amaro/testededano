#include <stdio.h>
#include <stdlib.h>

float calcularDano (float A, float D);

int main (){
    float ataque, defesa;
    float danoMain;
    printf("---- CALCULO DE DANO ----\n");

    printf("Digite o Seu ataque:");
    scanf("%f", &ataque);

    printf("Digite a Defesa do inimigo:");
    scanf("%f", &defesa);
  
    danoMain = calcularDano(ataque, defesa);

    printf("O seu dano será: %.2f", danoMain);
    return 0;
}

float calcularDano (float A, float D) {
    float dano;
    dano = A - D;
    if (D > A) {
        dano = 0;
    }
    return(dano);
}