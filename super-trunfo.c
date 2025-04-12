// Super Trunfo - Nível Mestre.
#include <stdio.h>

int main(){
    // Variaveis que vão ser usadas
    char cidade_um[50], cidade_dois[50], estado_um, estado_dois, codigo_um[5], codigo_dois[5];
    unsigned long int populacao_um, populacao_dois, turisticos_um, turisticos_dois;
    float area_um, area_dois, pib_um, pib_dois, densipopu_um, densipopu_dois, pibcapta_um, pibcapta_dois, superpoder_um, superpoder_dois;

    // Entrada e leitura de dados para a primeira Carta.
    printf("\nPreencha os Dados da Carta 1\n");

    printf("Nome da Cidade:\n ");
    scanf(" %49s[^\n]", cidade_um); // Caso a cidade tenha nome composto use _ em vez de espaço

    printf("Digite o Estado(A ou B):\n ");
    scanf(" %c", &estado_um);

    printf("Digite o Codigo da Carta (A01 ou B02): \n ");
    scanf("%4s", codigo_um);

    printf("Digite o numero de Habitantes:\n ");
    scanf("%lu", &populacao_um);

    printf("Digite a Área da Cidade:\n ");
    scanf("%f", &area_um);

    printf("Digite o PIB da Cidade:\n ");
    scanf("%f", &pib_um);

    printf("Pontos Turisticos da Cidade:\n ");
    scanf("%d", &turisticos_um);

    // Calcular Densidade Populacional e PIB per Capita da Carta1.
    densipopu_um = populacao_um / (area_um + 0.0001);
    pibcapta_um = pib_um / (populacao_um + 0.0001);

    // Super Poder: Somar todos os atributos numéricos da Carta1.
    superpoder_um = populacao_um + area_um + pib_um + turisticos_um + pibcapta_um - densipopu_um;

    // Entrada e leitura de dados para a segunda Carta.
    printf("\nPreencha os Dados da Carta 2\n");

    printf("Nome da Cidade:\n ");
    scanf(" %49s[^\n]", cidade_dois); // Caso a cidade tenha nome composto use _ em vez de espaço

    printf("Digite o Estado(B):\n ");
    scanf(" %c", &estado_dois);

    printf("Digite o Codigo da Carta (B02): \n ");
    scanf("%4s", codigo_dois);

    printf("Digite o numero de Habitantes:\n ");
    scanf("%lu", &populacao_dois);

    printf("Digite a Área da Cidade:\n ");
    scanf("%f", &area_dois);

    printf("Digite o PIB da Cidade:\n ");
    scanf("%f", &pib_dois);

    printf("Pontos Turisticos da Cidade:\n ");
    scanf("%d", &turisticos_dois);

    // Calcular Densidade Populacional e PIB per Capita da Carta2.
    densipopu_dois = populacao_dois / (area_dois + 0.0001);
    pibcapta_dois = pib_dois / (populacao_dois + 0.0001);

    // Super Poder: Somar todos os atributos numéricos da Carta2.
    superpoder_dois = (float)populacao_dois + area_dois + pib_dois + turisticos_dois + pibcapta_dois - densipopu_dois;

    // Dados da Carta 1
    printf("\n****** CARTA 1 ******");
    printf("\nEstado: %c\n", estado_um);
    printf("Código: %s\n", codigo_um);
    printf("Nome da Cidade: %s\n", cidade_um);
    printf("População: %lu\n", populacao_um);
    printf("Área: %.2f km²\n", area_um);
    printf("PIB: %.2f Bilhões de reais\n", pib_um);
    printf("Número de Pontos Turísticos: %d\n", turisticos_um);
    printf("Densidade Populacional: %.2f hab/km²\n", densipopu_um);
    printf("PIB per Capita: %.2f reais\n", pibcapta_um);
    printf("Super Poder: %.2f\n", superpoder_um);

    // Dados da Carta 2
    printf("\n****** CARTA 2 ******");
    printf("\nEstado: %c\n", estado_dois);
    printf("Código: %s\n", codigo_dois);
    printf("Nome da Cidade: %s\n", cidade_dois);
    printf("População: %lu\n", populacao_dois);
    printf("Área: %.2f km²\n", area_dois);
    printf("PIB: %.2f Bilhões de reais\n", pib_dois);
    printf("Número de Pontos Turísticos: %d\n", turisticos_dois);
    printf("Densidade Populacional: %.2f hab/km²\n", densipopu_dois);
    printf("PIB per Capita: %.2f reais\n", pibcapta_dois);
    printf("Super Poder: %.2f\n", superpoder_dois);

    // Comparação de dados

    printf("\n*** COMPARAÇÃO DAS CARTAS ***\n");

    printf("População: Carta %d Venceu\n", (populacao_um > populacao_dois) ? 1 : 2);
    printf("Área: Carta %d Venceu\n", (area_um > area_dois) ? 1 : 2);
    printf("PIB: Carta %d Venceu\n", (pib_um > pib_dois) ? 1 : 2);
    printf("Pontos Turísticos: Carta %d Venceu\n", (turisticos_um > turisticos_dois) ? 1 : 2);
    printf("Densidade Populacional: Carta %d Venceu\n", (densipopu_um < densipopu_dois) ? 1 : 2);
    printf("PIB per Capita: Carta %d Venceu\n", (pibcapta_um > pibcapta_um) ? 1 : 2);
    printf("Super Poder: Carta %d Venceu\n", (superpoder_um > superpoder_dois) ? 1 : 2);
    
    // Comparação das cartas.

    printf("\nComparação de cartas (Atributo: População)\n");
    
    // Nome da cidade e população que vão ser comparadas
    printf("Carta 1: %s (SP): %lu\n", cidade_um, populacao_um);
    printf("Carta 2: %s (RJ): %lu\n", cidade_dois, populacao_dois);
    
    // estrutura em if que vai mostrar qual carta é a ganhadora e mostrar no terminal para o usuario o resultado.
    if (populacao_um > populacao_dois) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade_um);
    } else if (populacao_dois > populacao_um) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade_dois);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    // Vamos Comparar um atributo por vez nas cartas usando um pequeno menu.
    int escolhaComparacao;

    printf("\n*** MENU INTERATIVO ***\n");
    printf("Escolha uma opção:\n");
    printf("1° Nome das cidades.\n");
    printf("2° População.\n");
    printf("3° Área.\n");
    printf("4° PIB.\n");
    printf("5° Número de pontos turísticos.\n");
    printf("6° Densidade.\n");
    printf("Escolha: ");
    scanf("%d", &escolhaComparacao);

    switch (escolhaComparacao)
    {
    case 1:
        printf("\nCarta 1: %s - Carta 2: %s.\n", cidade_um, cidade_dois);
        break;
    case 2:
        if (populacao_um > populacao_dois)
        {
            printf("\nCarta 1: %s - Carta 2: %s.\n", cidade_um, cidade_dois);
            printf("Atributo: População.\n");
            printf("Valor dos atributos da Carta 1: (%lu) e Carta 2: (%lu).\n", populacao_um, populacao_dois);
            printf("A Carta %d (%s) VENCEU!\n", (populacao_um > populacao_dois) ? 1 : 2, cidade_um);
        } else{
            printf("EMPATE!\n");
        }
            break;
    case 3:
        if (area_um > area_dois)
        {
            printf("\nCarta 1: %s - Carta 2: %s.\n", cidade_um, cidade_dois);
            printf("Atributo: Área.\n");
            printf("Valor dos atributos da Carta 1: (%.2f) e Carta 2: (%.2f).\n", area_um, area_dois);
            printf("A Carta %d (%s) VENCEU!\n", (area_um > area_dois) ? 1 : 2, cidade_um);
        } else{
            printf("EMPATE!\n");
        }
            
            break;
    case 4:
        if (pib_um > pib_dois)
        {
            printf("\nCarta 1: %s - Carta 2: %s.\n", cidade_um, cidade_dois);
            printf("Atributo: PIB.\n");
            printf("Valor dos atributos da Carta 1: (%.2f) e Carta 2: (%.2f).\n", pib_um, pib_dois);
            printf("A Carta %d (%s) VENCEU!\n", (pib_um > pib_dois) ? 1 : 2, cidade_um);     
        } else{
            printf("EMPATE!\n");
        }
            break;
    case 5:
        if (turisticos_um > turisticos_dois)
        {
            printf("\nCarta 1: %s - Carta 2: %s.\n", cidade_um, cidade_dois);
            printf("Atributo: Pontos Turísticos.\n");
            printf("Valor dos atributos da Carta 1: (%lu) e Carta 2: (%lu).\n", turisticos_um, turisticos_dois);
            printf("A Carta %d (%s) VENCEU!\n", (turisticos_um > turisticos_dois) ? 1 : 2, cidade_um);
        } else{
            printf("EMPATE!\n");
        }
            break;
    case 6:
        if (densipopu_um < densipopu_dois)
        {
            printf("\nCarta 1: %s - Carta 2: %s.\n", cidade_um, cidade_dois);
            printf("Atributo: Área.\n");
            printf("Valor dos atributos da Carta 1: (%d) e Carta 2: (%d).\n", densipopu_um, densipopu_dois);
            printf("A Carta %d (%s) VENCEU!\n", (densipopu_um < densipopu_dois) ? 1 : 2, cidade_um);
        } else{
            printf("EMPATE!\n");
        }
            break;       
    default:
        printf("ESCOLHA ERRADA.\n");
        break;
    }
    return 0;
}