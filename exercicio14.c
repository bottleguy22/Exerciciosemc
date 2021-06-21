#include <stdio.h>

int main (){
    int numero1, numero2, numero3, numero4, n1, n2, n3, n4;
 
    printf("Qual o primeiro número a ser elevado ao quadrado? ");
    scanf("%d", &numero1);

    printf("Qual o segundo número a ser elevado ao quadrado? ");
    scanf("%d", &numero2);

    printf("Qual o terceiro número a ser elevado ao quadrado? ");
    scanf("%d", &numero3);

    printf("Qual o quarto número a ser elevado ao quadrado? ");
    scanf("%d", &numero4);

    n1= numero1 * numero1;
    n2= numero2 * numero2; 
    n3= numero3 * numero3;
    n4= numero4 * numero4;

    if( n3 >= 1000){
        printf("%d",n3);

    }else{
        printf("Numero1: %d, Quadrado: %d\n", numero1,n1);
        printf("Numero2: %d, Quadrado: %d\n", numero2,n2);
        printf("Numero3: %d, Quadrado: %d\n", numero3,n3);
        printf("Numero4: %d, Quadrado: %d\n", numero4,n4);
    }


}
