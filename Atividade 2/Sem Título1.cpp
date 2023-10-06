#include <stdio.h>

int main() {
    float distancia, litros, consumoMedio;
	
	printf("------------------------------------------------------------------------------------------------\n");
	printf("Ola usuario, bem vindo a nossa aplicacao, abaixo tera perguntas para satisfazer sua necessidades\n");
	printf("------------------------------------------------------------------------------------------------\n");
	
    printf("Digite a distancia percorrida (em quilometros): ");
    scanf("%f", &distancia);

    printf("Digite o total de litros de combustivel gasto: ");
    scanf("%f", &litros);

    consumoMedio = distancia / litros;

    printf("O consumo medio do automovel e: %.2f km/l\n", consumoMedio);
    
    return 0;
}
