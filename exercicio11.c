#include <stdio.h>
#include <ctype.h>

int main(){
    float altura, peso_ideal;
    char sexo;

    
    printf("Qual sua altura? ");
    scanf("%f", &altura);
    gets(stdin); //sempre pra corrigir o bug

    printf("Informe o seu sexo m/f: ");
    scanf("%c", &sexo);

    if (tolower(sexo) =='m'){
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2f", peso_ideal);
    }
    if (tolower(sexo) =='f'){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é %.2f", peso_ideal);
    }
    if (tolower (sexo) != 'm' && tolower (sexo) != 'f'){
        printf("Sexo não reconhecido. \n");
    }
    
}