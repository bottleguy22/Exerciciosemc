#include <stdio.h>

int main(){
  float fahrenheit , celsius;
  
  printf("Informe a temperatura fahrenheit: ");
  scanf ("%f", &fahrenheit);
  

   celsius = (fahrenheit - 32) * 5/9;
  
  
  printf("A temperatura em Celsius é: %f", celsius);
  
  return 0;
}