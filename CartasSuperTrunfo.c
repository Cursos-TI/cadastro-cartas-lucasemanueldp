#include <stdio.h>

int main() {
    // Adição das váriaveis e atributos
    char estado;
    char codigo[50];
    char nomecidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    //Apenas para maior organização visual
    printf("--------------------------------------------\n");
    //Leitura do estado
    printf("Digite uma letra para representar o estado: \n");
    scanf("%c", &estado);
    //Leitura do código
    printf("Digite o código da carta: \n");
    scanf("%s", codigo);
    //Leitura do nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade);
    //Leitura da populaçao
    printf("Digite a quantidade da população da cidade: \n");
    scanf("%d", &populacao);
    //Leitura da área da cidade
    printf("Digite o tamanho da área da cidade: \n");
    scanf("%f", &area);
    //Leitura do PIB da cidade
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    //Leitura dos pontos turísticos
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos);

    //Organização estética para impressão da carta
    printf("--------------------------------------------\n");
    printf("            SUPER TRUNFO CIDADES            \n");
    printf("--------------------------------------------\n");
    //Impressão dos dados da carta
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome Da Cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %.1f bilhões de reais \n", pib);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos);
    printf("--------------------------------------------\n");
    //Finalização
    return 0;






}
