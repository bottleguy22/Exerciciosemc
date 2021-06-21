#include <stdio.h>

int main (){

    int ganho_hora , horas_trabalhadas, multiplicacao;

    printf("Quanto você ganha por hora? ");
    scanf ("%d", &ganho_hora);

    printf("Quantas horas você trabalha? ");
    scanf ("%d", & horas_trabalhadas);

    multiplicacao = (ganho_hora * horas_trabalhadas);

    printf("O valor que você ganha pelas horas trabalhadas é %d", multiplicacao);

    return 0;
    

}