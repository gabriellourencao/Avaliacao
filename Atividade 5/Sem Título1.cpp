#include <stdio.h>
#include <math.h>

int main() {
    float cateto1, cateto2, hipotenusa;

	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("        Ola, bem vindo a calculadora de hipotenusa, coloque a medida dos catetos que calculamos pra voce             \n");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o comprimento do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o comprimento do segundo cateto: ");
    scanf("%f", &cateto2);

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    printf("A hipotenusa do triangulo e: %.2f\n", hipotenusa);

	printf("---------------------------------------------------------------------------------------------------------------------\n");
	printf("                           O B R I G A D O  P O R  U S A R  A  N O S S A  A P L I C A C A O                          \n");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
    return 0;
}
