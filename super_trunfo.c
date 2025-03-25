#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main(){

// Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1, estado2;
    char codigocarta1[5], codigocarta2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepop1, densidadepop2;
    float pibpercap1, pibpercap2;

// Criação da Carta 1.
    printf("Vamos criar a Carta 1!\n\nDigite a letra do estado. (De 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Digite o código. (Letra do estado + dois números): ");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade. (Sem espaços!): ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade. (Em Km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos a cidade tem: ");
    scanf("%d", &pontosturisticos1);

    densidadepop1 = (float)populacao1 / area1;
    pibpercap1 = (float)pib1 / populacao1;

    printf("\nCarta 1 criada com sucesso!\n\n");

// Criação da carta 2.

    printf("Agora vamos criar a Carta 2!\n\n");

    printf("Digite a letra do estado. (De 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Digite o código. (Letra do estado + dois números): ");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade. (Sem espaços!): ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade. (Em Km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos a cidade tem: ");
    scanf("%d", &pontosturisticos2);

    densidadepop2 = (float)populacao2 / area2;
    pibpercap2 = (float)pib2 / populacao2;

    printf("\nCarta 2 criada com sucesso!\n\n");
    printf("==============================\n\n");

// Área para exibição dos dados das cidades

    printf("Aqui está os atributos das duas cartas:\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop1);
    printf("PIB per Capita: %.2f reais\n\n", pibpercap1);
    
    printf("==============================\n\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per Capita: %.2f reais\n\n", pibpercap2);

    printf("==============================\n\n");

    return 0;
}
