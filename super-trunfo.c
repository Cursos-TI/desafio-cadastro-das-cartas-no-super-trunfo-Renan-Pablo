// Jogo de cartas Super Trunfo - Nivel Aventureiro.

#include <stdio.h>


int main(){
    // Variaveis que vão ser usadas
    char cidade_um[50], cidade_dois[50], estado_um, estado_dois, codigo_um[5], codigo_dois[5];
    int populacao_um, populacao_dois, turisticos_um, turisticos_dois;
    float area_um, area_dois, pib_um, pib_dois, densipopu_um, densipopu_dois, pibcapta_um, pibcapta_dois;

    // Entrada e leitura de dados para primeira Carta.
        printf("\nPreencha os Dados da Carta 1\n");
        
        printf("Nome da Cidade:\n ");
        scanf(" %49s[^\n]", &cidade_um); // Caso a cidade tenha nome composto use _ em vez de espaço

        printf("Digite o Estado(A ou B):\n ");
        scanf(" %c", &estado_um);

        printf("Digite o Codigo da Carta (A01 ou B02): \n ");
        scanf("%4s", &codigo_um);

        printf("Digite o numero de Habitantes:\n ");
        scanf("%d", &populacao_um);

        printf("Digite a Área da Cidade:\n ");
        scanf("%f", &area_um);

        printf("Digite o PIB da Cidade:\n ");
        scanf("%f", &pib_um);

        printf("Pontos Turisticos da Cidade:\n ");
        scanf("%d", &turisticos_um);

        // Calcular Densidade Populacional e PIB per Capita da Primeira Carta.

        densipopu_um = populacao_um / area_um;
        pibcapta_um = pib_um / area_um;

        // Dados da Carta 1 que seram exibidas no terminal 
        
        printf("\n****** CARTA 1 ******");

        printf("\nEstado: %c\n", estado_um);
        printf("Código: %s\n", codigo_um);
        printf("Nome da Cidade: %s\n", cidade_um);
        printf("População: %d\n", populacao_um);
        printf("Área: %.2f km²\n", area_um);
        printf("PIB: %.2f Bilhões de reais\n", pib_um);
        printf("Número de Pontos Turísticos: %d\n", turisticos_um);
        printf("Densidade Populacional: %f\n", densipopu_um);
        printf("PIB per Capita: %f\n", pibcapta_um);

            // Entrada e leitura de dados para a segunda Carta.
            printf("\nPreencha os Dados da Carta 2\n");
        
            printf("Nome da Cidade:\n ");
            scanf(" %49s[^\n]", &cidade_dois); // Caso a cidade tenha nome composto use _ em vez de espaço
    
            printf("Digite o Estado(B):\n ");
            scanf(" %c", &estado_dois);
    
            printf("Digite o Codigo da Carta (B02): \n ");
            scanf("%4s", &codigo_dois);
    
            printf("Digite o numero de Habitantes:\n ");
            scanf("%d", &populacao_dois);
    
            printf("Digite a Área da Cidade:\n ");
            scanf("%f", &area_dois);
    
            printf("Digite o PIB da Cidade:\n ");
            scanf("%f", &pib_dois);
    
            printf("Pontos Turisticos da Cidade:\n ");
            scanf("%d", &turisticos_dois);
    
            // Calcular Densidade Populacional e PIB per Capita da Segunda Carta.

            densipopu_dois = populacao_dois / area_dois;
            pibcapta_dois = pib_dois / populacao_dois;

            // Dados da Carta 2 que seram exibidas no terminal 
            
            printf("\n****** CARTA 2 ******");
    
            printf("\nEstado: %c\n", estado_dois);
            printf("Código: %s\n", codigo_dois);
            printf("Nome da Cidade: %s\n", cidade_dois);
            printf("População: %d\n", populacao_dois);
            printf("Área: %.2f km²\n", area_dois);
            printf("PIB: %.2f Bilhões de reais\n", pib_dois);
            printf("Número de Pontos Turísticos: %d\n", turisticos_dois);
            printf("Densidade Populacional: %f\n", densipopu_dois);
            printf("PIB per Capita: %f\n", pibcapta_dois);

    return 0;
}
