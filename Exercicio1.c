#include <stdio.h>

int main(){
	int num1, num2, soma, multiplicacao;

	printf("Informe o primeiro número: ");
	scanf("%d" , &num1);

	printf("Informe o segundo número: ");
	scanf("%d", & num2);

	soma = num1 + num2;
	multiplicacao = soma * num1;

	printf("O resultado da multiplicação é %d", multiplicacao);
    
	return 0;
}

