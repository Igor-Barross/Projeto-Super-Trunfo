// Inicio do progama super trunfo:
#include <stdio.h>
#include <locale.h>

int main(){
    // Tive que colocar esse comando para corrigir um bug exibição dos caracteres no meu terminal
    setlocale(LC_ALL, "pt_BR.UTF-8");
    

    // Declaração das variáveis das cartas
    char estado1, estado2;
    char codigo_estado_carta1[4] = "";
    char codigo_estado_carta2[4] = "";
    char nome_cidade1[20] = "";
    char nome_cidade2[20] = "";
    int populacao1 = 0, populacao2 = 0;
    float area_km_quadrado1 = 0, area_km_quadrado2 = 0;
    float pib1 = 0, pib2 = 0;
    int numero_pontos_turisticos1 = 0, numero_pontos_turisticos2 = 0;
    float densidade_pop1 = 0, densidade_pop2 = 0;
    float pib_percapita1 = 0, pib_percapita2 = 0;

    // Coleta de dados da carta 1
    printf("Carta 1 - Digite os dados\n");

    // Coleta do Nome do estado - Carta 1
    printf("Digite uma letra de 'A' a 'H'. (representando um dos oito estados):\n");
    scanf(" %c", &estado1);
    
    // Coleta do Codigo do estado - Carta 1
    printf("Digite a letra do estado seguida de 01 a 04. (ex: A01, B04): \n");
    scanf(" %s", codigo_estado_carta1);

    // Coleta do Nome da cidade - Carta 1
    printf("Nome da cidade: \n");
    scanf("%s", nome_cidade1);
    
    // Coleta da População - Carta 1
    printf("População: \n");
    scanf("%d", &populacao1);
    
    // Coleta da Área em km² - Carta 1
    printf("Área em km²: \n");
    scanf("%f", &area_km_quadrado1);
    
    // Coleta do PIB - Carta 1
    printf("PIB: \n");
    scanf("%f", &pib1);
    
    // Coleta do Numero de pontos turisticos - Carta 1
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticos1);
    
    // Calculo da densidade populacional - Carta 1
    densidade_pop1 = populacao1 / area_km_quadrado1;

    // Calculo do PIB per Capita - Carta 2
    pib_percapita1 = (pib1 * 1000000000.0) / populacao1;

    printf("======================================================================================\n");
    printf("PARABÉNS!!!! você concluiu todos os passos para completar a primeira carta!!!\n");
    printf("\n");
    
    // Coleta de dados da carta 2
    printf("Carta 2 - Digite os dados\n");
    
    // Coleta do Nome do estado - Carta 2
    printf("Digite uma letra de 'A' a 'H'. (representando um dos oito estados): \n");
    scanf(" %c", &estado2);
    
    // Coleta do Codigo do estado - Carta 2
    printf("Digite a letra do estado seguida de 01 a 04. (ex: A01, B04): \n");
    scanf(" %s", codigo_estado_carta2);
    
    // Coleta do Nome da cidade - Carta 2
    printf("Nome da cidade: \n");
    scanf("%s", nome_cidade2);
    
    // Coleta da População - Carta 2
    printf("População: \n");
    scanf("%d", &populacao2);
    
    // Coleta da Área em km² - Carta 2
    printf("Área em km²: \n");
    scanf("%f", &area_km_quadrado2);
    
    // Coleta do PIB - Carta 2
    printf("PIB: \n");
    scanf("%f", &pib2);

    // Coleta do Numero de pontos turisticos - Carta 2
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticos2);

    // Calculo da densidade populacional - Carta 2
    densidade_pop2 = populacao2 / area_km_quadrado2;

    // Calculo do PIB per Capita - Carta 2
    pib_percapita2 = (pib2 * 1000000000.0) / populacao2;
    
    printf("======================================================================================\n");
    printf("Párabens, você concluiu todos os passos para completar a segunda carta\n");   

    printf("Aqui está a exibição de todos os dados: \n");
    printf("\n");

    // Apresentação dos dados da carta 1
    printf("Carta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código do estado: %s\n", codigo_estado_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f km²\n", area_km_quadrado1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);
    
    printf("\n");

    // Apresentação dos dados da carta 2
    printf("Carta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código do estado: %s\n", codigo_estado_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f km²\n", area_km_quadrado2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);

    return 0;
}