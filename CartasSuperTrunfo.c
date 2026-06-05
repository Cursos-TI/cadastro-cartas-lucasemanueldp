#include <stdio.h>

int main() {
    // Adição das váriaveis e atributos
    char estado1, estado2, codigo1[50],codigo2[50], nomecidade1[50], nomecidade2[50];
    int pontosturisticos1, pontosturisticos2, populacao1, populacao2;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2;
    
    //Apenas para maior organização visual
    printf("----------------------------------------\n");
    printf("----------CADASTRO CARTA 1--------------\n");
    //Cadastro da carta 1

    //Leitura do estado
    printf("Digite uma letra para representar o estado: \n");
    scanf("  %c", &estado1);
    //Leitura do código
    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);
    //Leitura do nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade1);
    //Leitura da populaçao
    printf("Digite a quantidade da população da cidade: \n");
    scanf("%d", &populacao1);
    //Leitura da área da cidade
    printf("Digite o tamanho da área da cidade: \n");
    scanf("%f", &area1);
    //Leitura do PIB da cidade
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    //Leitura dos pontos turísticos
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos1);
    //Cálculo de Densidade Populacional
    densidadepopulacional1 = (float)populacao1/area1;
    //Cáluclo de PIB per Capita
    pibpercapita1 = (float)pib1/populacao1;

    //Cadastro carta 2
    printf("----------------------------------------\n");
    printf("----------CADASTRO CARTA 2--------------\n");

    //Leitura do estado
    printf("Digite uma letra para representar o estado: \n");
    scanf("  %c", &estado2);
    //Leitura do código
    printf("Digite o código da carta: \n");
    scanf(" %s", codigo2);
    //Leitura do nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade2);
    //Leitura da populaçao
    printf("Digite a quantidade da população da cidade: \n");
    scanf("%d", &populacao2);
    //Leitura da área da cidade
    printf("Digite o tamanho da área da cidade: \n");
    scanf("%f", &area2);
    //Leitura do PIB da cidade
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    //Leitura dos pontos turísticos
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);
    //Cálculo de Densidade Populacional
    densidadepopulacional2 = (float)populacao2/area2;
    //Cáluclo de PIB per Capita
    pibpercapita2 = (float)pib2/populacao2;

    //Organização estética para impressão da carta
    printf("--------------------------------------------\n");
    printf("            SUPER TRUNFO CARD 1            \n");
    printf("--------------------------------------------\n");
    //Impressão dos dados da carta
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome Da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais \n", pibpercapita1);
    printf("--------------------------------------------\n");

    //Organização estética para impressão da carta
    printf("--------------------------------------------\n");
    printf("            SUPER TRUNFO CARD 2            \n");
    printf("--------------------------------------------\n");
    //Impressão dos dados da carta
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome Da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibpercapita2);
    printf("--------------------------------------------\n");
    //Finalização Carta 2

    return 0;






}
