#include <stdio.h>

int main (){
    int numero, a, b;

    printf("Qual o número? ");
    scanf("%d", &numero);

    if(numero > 0){
        a = numero;
        printf("O número é positivo.");  
    }else{
        b = numero;
        printf("O número é negativo.");
    }

    printf("%d", numero);

    
}