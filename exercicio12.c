#include <stdio.h>

int main (){
    float peso, multa=0, excesso=0;
    

    printf("Qual o peso do peixe? ");
    scanf("%f", &peso);

     if (peso>50){
         multa = (peso - 50) * 4;
         printf("Você irá pagar $RS %.2f em multas.", multa);
     
     }else{
          printf("Multas: %.2f \n", multa);
         printf("Excesso: %d", excesso);
     }     

     }


      
    