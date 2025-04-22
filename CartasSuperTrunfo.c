#include <stdio.h>

int main(){


    char estado1, estado2;
    char codigocarta1[3];
    char codigocarta2[3];
    char cidade1[30];
    char cidade2[30];
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float pib1, pib2;
    float area1, area2;

    // Input Carta 1

    printf("Insira a seguir as imformacoes da Carta 1 \n");
    printf("Digite a letra inicial do estado de A a H:");
    scanf(" %c", &estado1);

    printf("Difina o codigo unico da carta utilizando a letra do estado mais um numero de 01 a 04(Exemplo: F02): ");
    scanf(" %s", codigocarta1);

    printf("Digite o nome da cidade sem espacos: ");
    scanf(" %s", cidade1);

    printf("Digite o numero populacional: ");
    scanf(" %d", &populacao1);

    printf("Digite a area: ");
    scanf(" %f", &area1);

    printf("digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosturisticos1);

    
    // Input Carta 2

    printf("\nInsira a seguir as imformacoes da Carta 2 \n");
    printf("Digite a letra inicial do estado de A a H:");
    scanf(" %c", &estado2);

    printf("Defina o codigo unico da carta utilizando a letra do estado mais um numero de 01 a 04(Exemplo: F02): ");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da cidade sem espacos: ");
    scanf(" %s", cidade2);

    printf("Digite o numero populacional: ");
    scanf(" %d", &populacao2);

    printf("Digite a area: ");
    scanf(" %f", &area2);

    printf("digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosturisticos2);


    // Output Carta 1

    printf("\nCarta 1 \n");

    printf("Estado: %c\n", estado1);

    /*O printf a seguir imprime o que esta escrito nele,
	 mas nao imprime o valor da variavel no Visual Studio Code
	 
	 No DEV C++ o printf funciona perfeitamente
	*/
    printf("Codigo da carta: %s\n", codigocarta1);
    
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao :%d\nArea: %f km^2\n", populacao1, area1);
    printf("PIB: %.2f Bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);

    
    // Output Carta 2

    printf("\nCarta 2 \n");

    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\nArea: %f km^2\n", populacao2, area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);
    
 
   
    return 0;

}
