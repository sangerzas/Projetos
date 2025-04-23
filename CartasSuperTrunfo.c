#include <stdio.h>

// Cartas Super Trunfo - Nivel Novato

char codigocarta1[3]; 
char codigocarta2[3];
char estado1[30];
char estado2[30];
char cidade1[30];
char cidade2[30];
int populacao1, populacao2;
int pontosturisticos1, pontosturisticos2;
float pib1, pib2;
float area1, area2;

int main() {

//Output Carta 2 

    printf("Insira a seguir as imformacoes da Carta 1 \n");
    printf("Digite o nome do estado: ");
    scanf(" %s", estado1);

    printf("Difina o codigo unico da carta utilizando letras de A a H e numeros de 01 a 04(Exemplo: F02): ");
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
    printf("Digite o nome do estado:");
    scanf(" %s", estado2);

    printf("Difina o codigo unico da carta utilizando letras de A a H e numeros de 01 a 04(Exemplo: F02): ");
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


    printf("Codigo da carta: %s\n", codigocarta1);
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao :%d\nArea: %f km^2\n", populacao1, area1);
    printf("PIB: %.2f Bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);


// Output Carta 2

    printf("\nCarta 2 \n");

    printf("Codigo da carta: %s\n", codigocarta2);
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\nArea: %f km^2\n", populacao2, area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);





    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}