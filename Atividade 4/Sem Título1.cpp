#include <stdio.h>

int main() {
    float fahrenheit, celsius;

	printf("-------------------------------------------------------------------------------------\n");
	printf("               Ola, bem vindo ao conversor de Celsius em Fahrenheit                  \n");
	printf("-------------------------------------------------------------------------------------\n");
	
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("A temperatura em graus Celsius e: %.2f\n", celsius);
    
	printf("-------------------------------------------------------------------------------------\n");
	printf("        O B R I G A D O  P O R  U S A R  A  N O S S A  A P L I C A C A O             \n");
	printf("-------------------------------------------------------------------------------------\n");

    return 0;
}
