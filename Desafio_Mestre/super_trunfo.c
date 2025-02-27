#include <stdio.h>


int main(){

    // Declaração das variáveis das cartas
    char estado1, estado2;
    char codigo_estado_carta1[4] = "";
    char codigo_estado_carta2[4] = "";
    char nome_cidade1[20] = "";
    char nome_cidade2[20] = "";
    unsigned long int populacao1 = 0, populacao2 = 0;
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
    scanf("%lu", &populacao1);
    
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

    // Calculo do PIB per Capita - Carta 1
    pib_percapita1 = (pib1 * 1000000000) / populacao1; // Multipliquei por 1 bilhão porque o pib será apresentado em bilhões de reais

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
    scanf("%lu", &populacao2);
    
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
    pib_percapita2 = (pib2 * 1000000000) / populacao2; // Multipliquei por 1 bilhão porque o pib será apresentado em bilhões de reais
    
    printf("======================================================================================\n");
    printf("Párabens, você concluiu todos os passos para completar a segunda carta\n");   
    printf("Aqui está a exibição de todos os dados: \n");
    printf("\n");

    // Apresentação dos dados da carta 1
    printf("Carta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código do estado: %s\n", codigo_estado_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
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
    printf("População: %lu\n", populacao2);
    printf("Área em km²: %.2f km²\n", area_km_quadrado2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);

    // Calculo do Super Poder
    float densidade_pop_inverso1 = 0, densidade_pop_inverso2 = 0;
    densidade_pop_inverso1 = 1 / densidade_pop1;
    densidade_pop_inverso2 = 1 / densidade_pop2;

    float super_poder1 = 0, super_poder2 = 0;    
    super_poder1 = (float)populacao1 + (float)area_km_quadrado1 + 
                   (float)pib1 + (float)numero_pontos_turisticos1 + 
                   (float)pib_percapita1 + (float)densidade_pop_inverso1;

    super_poder2 = (float)populacao2 + (float)area_km_quadrado2 + 
                   (float)pib2 + (float)numero_pontos_turisticos2 + 
                   (float)pib_percapita2 + (float)densidade_pop_inverso2;

    printf("======================================================================================\n");
    printf("Exibição dos super poderes das cartas: \n");
    printf("Super poder Carta 1: %.2f \n", super_poder1);
    printf("Super poder Carta 2: %.2f \n", super_poder2);
    printf("======================================================================================\n");
    printf("-----COMPARAÇÃO DAS CARTAS-----\n");

    // Comparaçãodo da População   
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu\n");
    } else if (populacao1 == populacao2) {
        printf("População: EMPATE\n");
    } else {
        printf("População: Carta 2 venceu\n");
    }

    // Comparaçãodo da Área em km²   
    if (area_km_quadrado1 > area_km_quadrado2) {
        printf("Área em km²: Carta 1 venceu \n");
    } else if (area_km_quadrado1 == area_km_quadrado2) {
        printf("Área em km²: EMPATE\n");
    } else {
        printf("Área em km²: Carta 2 venceu\n");
    }

    // Comparaçãodo do PIB   
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu\n");
    } else if (pib1 == pib2) {
        printf("PIB: EMPATE\n");
    } else {
        printf("PIB: Carta 2 venceu\n");
    }

    // Comparaçãodo do Numero de pontos turisticos   
    if (numero_pontos_turisticos1 > numero_pontos_turisticos2) {
        printf("Numero de pontos turisticos: Carta 1 venceu\n");
    } else if (numero_pontos_turisticos1 == numero_pontos_turisticos2) {
        printf("Numero de pontos turisticos: EMPATE\n");
    } else {
        printf("Numero de pontos turisticos: Carta 2 venceu\n");
    }

    // Comparaçãodo da Densidade Populacional   
    if (densidade_pop_inverso1 < densidade_pop_inverso2) {
        printf("Densidade Populacional: Carta 1 venceu\n");
    } else if (densidade_pop_inverso1 == densidade_pop_inverso2) {
        printf("Densidade Populacional: EMPATE\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu\n");
    }

    // Comparaçãodo do PIB per Capita
    if (pib_percapita1 > pib_percapita2) {
        printf("PIB per Capita: Carta 1 venceu\n");
    } else if (pib_percapita1 == pib_percapita2) {
        printf("PIB per Capita: EMPATE\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu\n");
    }


    return 0;
}