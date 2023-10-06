#include <stdio.h>

int main() {
    float nota1, nota2, media;
	
	printf("--------------------------------------------------------\n");
	printf("Ola bem vindo a media de notas, digite abaixo sua nota: \n");
	printf("--------------------------------------------------------\n");
	
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media final do aluno e: %.2f\n", media);
    
    printf("--------------------------------------------------------\n");
    printf("                OBRIGADO PELA PREFERENCIA               \n");
    printf("--------------------------------------------------------\n");

    return 0;
}
