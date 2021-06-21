#include <stdio.h>

int main (){
    int primeiro_numero, segundo_numero, soma;

    printf("Insira o primeiro numero: ");
    scanf ("%d", &primeiro_numero);

    printf("Insira o segundo numero: ");
    scanf("%d", &segundo_numero);

    soma = (primeiro_numero + segundo_numero);

    printf("O resultado da soma é %d", soma);

    return 0;
}