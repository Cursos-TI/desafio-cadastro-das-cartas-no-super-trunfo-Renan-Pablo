// Super Trunfo - Desenvolvendo a Lógica - Nível Mestre.
#include <stdio.h>
#include <string.h>	

int main() {
    char cidade1[50], cidade2[50], primeiroAtributo, segundoAtributo;
    unsigned long int populacao1, populacao2, pTuristicos1, pTuristicos2;
    int area1, area2, pib1, pib2, densiPopula1, densiPopula2, pibCapta1, pibCapta2, resultado1, resultado2;
    
    // Pré-cadastro da Carta 1.
    strcpy(cidade1, "Sao Paulo");
    populacao1 = 12325000;
    area1 = 1521.11;
    pib1 = 699280000000;
    pTuristicos1 = 50;
    densiPopula1 = 8102;
    pibCapta1 = 56736;
    
    // Pré-cadastro da Carta 2.
    strcpy(cidade2, "Rio de Janeiro");
    populacao2 = 6748000;
    area2 = 1200.25;
    pib2 = 300500000000;
    pTuristicos2 = 30;
    densiPopula2 = 5622;
    pibCapta2 = 44531;
    
    // Escolha do 1º atributo.
    printf("Bem-vindo ao Super Trunfo\n");
    printf("Escolha o Primeiro Atributo.\n");
    printf("(P) para População.\n");
    printf("(A) para Área.\n");
    printf("(I) para PIB.\n");
    printf("(T) para Pontos Turísticos.\n");
    printf("(D) para Densidade Populacional.\n");
    printf("(C) para PIB per Capita.\n");
    printf("Escolha: ");
    scanf(" %c", &primeiroAtributo);
    
    switch (primeiroAtributo) {
        case 'P': case 'p':
            printf("Você escolheu o atributo População!\n");
            resultado1 = populacao1 > populacao2 ? 1 : 2;    
            break;
        case 'A': case 'a':    
            printf("Você escolheu o atributo Área!\n");
            resultado1 = area1 > area2 ? 1 : 2;
            break;    
        case 'I': case 'i':
            printf("Você escolheu o atributo PIB!\n");
            resultado1 = pib1 > pib2 ? 1 : 2;
            break;
        case 'T': case 't':
            printf("Você escolheu o atributo Pontos Turísticos!\n");
            resultado1 = pTuristicos1 > pTuristicos2 ? 1 : 2;
            break;
        case 'D': case 'd':
            printf("Você escolheu o atributo Densidade Populacional!\n");
            resultado1 = densiPopula1 < densiPopula2 ? 1 : 2;
            break;
        case 'C': case 'c':
            printf("Você escolheu o atributo PIB per Capita!\n");
            resultado1 = pibCapta1 > pibCapta2 ? 1 : 2;
            break;            
        default:
            printf("Ops... Atributo inválido!\n");
            break;
    }
    
    // Escolha do 2º atributo.
    printf("Escolha o Segundo Atributo.\n");
    printf("(P) para População.\n");
    printf("(A) para Área.\n");
    printf("(I) para PIB.\n");
    printf("(T) para Pontos Turísticos.\n");
    printf("(D) para Densidade Populacional.\n");
    printf("(C) para PIB per Capita.\n");
    printf("Escolha: ");
    scanf(" %c", &segundoAtributo);
    
    // Verifica se não escolheu atributos iguais.
    if (primeiroAtributo == segundoAtributo) {
        printf("Erro, você escolheu o mesmo atributo nas duas opções.\n");
    } else {
        switch (segundoAtributo) {
            case 'P': case 'p':
                printf("Você escolheu o atributo População!\n");
                resultado2 = populacao1 > populacao2 ? 1 : 2;    
                break;
            case 'A': case 'a':    
                printf("Você escolheu o atributo Área!\n");
                resultado2 = area1 > area2 ? 1 : 2;
                break;    
            case 'I': case 'i':
                printf("Você escolheu o atributo PIB!\n");
                resultado2 = pib1 > pib2 ? 1 : 2;
                break;
            case 'T': case 't':
                printf("Você escolheu o atributo Pontos Turísticos!\n");
                resultado2 = pTuristicos1 > pTuristicos2 ? 1 : 2;
                break;
            case 'D': case 'd':
                printf("Você escolheu o atributo Densidade Populacional!\n");
                resultado2 = densiPopula1 < densiPopula2 ? 1 : 2;
                break;
            case 'C': case 'c':
                printf("Você escolheu o atributo PIB per Capita!\n");
                resultado2 = pibCapta1 > pibCapta2 ? 1 : 2;
                break;            
            default:
                printf("Ops... Atributo inválido!\n");
                break;
        }    
    }

    printf("Cidades: %s e %s.\n", cidade1, cidade2);
    printf("Atributo 1: ");
    switch (primeiroAtributo) {
        case 'P': case 'p':
            printf("População\n%s: %lu\n%s: %lu\n", cidade1, populacao1, cidade2, populacao2);
            break;
        case 'A': case 'a':
            printf("Área\n%s: %.2f\n%s: %.2f\n", cidade1, area1, cidade2, area2);
            break;
        case 'I': case 'i':
            printf("PIB\n%s: %llu\n%s: %llu\n", cidade1, pib1, cidade2, pib2);
            break;
        case 'T': case 't':
            printf("Pontos Turísticos\n%s: %lu\n%s: %lu\n", cidade1, pTuristicos1, cidade2, pTuristicos2);
            break;
        case 'D': case 'd':
            printf("Densidade Populacional\n%s: %d\n%s: %d\n", cidade1, densiPopula1, cidade2, densiPopula2);
            break;
        case 'C': case 'c':
            printf("PIB per Capita\n%s: %d\n%s: %d\n", cidade1, pibCapta1, cidade2, pibCapta2);
            break;
    }

    printf("Atributo 2: ");
    switch (segundoAtributo) {
        case 'P': case 'p':
            printf("População\n%s: %lu\n%s: %lu\n", cidade1, populacao1, cidade2, populacao2);
            break;
        case 'A': case 'a':
            printf("Área\n%s: %.2f\n%s: %.2f\n", cidade1, area1, cidade2, area2);
            break;
        case 'I': case 'i':
            printf("PIB\n%s: %llu\n%s: %llu\n", cidade1, pib1, cidade2, pib2);
            break;
        case 'T': case 't':
            printf("Pontos Turísticos\n%s: %lu\n%s: %lu\n", cidade1, pTuristicos1, cidade2, pTuristicos2);
            break;
        case 'D': case 'd':
            printf("Densidade Populacional\n%s: %d\n%s: %d\n", cidade1, densiPopula1, cidade2, densiPopula2);
            break;
        case 'C': case 'c':
            printf("PIB per Capita\n%s: %d\n%s: %d\n", cidade1, pibCapta1, cidade2, pibCapta2);
            break;
    }

    // Variáveis para armazenar a soma dos atributos
    unsigned long int soma1 = 0, soma2 = 0;

    // Primeiro atributo
    if (primeiroAtributo == 'P' || primeiroAtributo == 'p') {
        soma1 += populacao1;
        soma2 += populacao2;
    } else if (primeiroAtributo == 'A' || primeiroAtributo == 'a') {
        soma1 += area1;
        soma2 += area2;
    } else if (primeiroAtributo == 'I' || primeiroAtributo == 'i') {
        soma1 += pib1;
        soma2 += pib2;
    } else if (primeiroAtributo == 'T' || primeiroAtributo == 't') {
        soma1 += pTuristicos1;
        soma2 += pTuristicos2;
    } else if (primeiroAtributo == 'D' || primeiroAtributo == 'd') {
        soma1 += densiPopula1;
        soma2 += densiPopula2;
    } else if (primeiroAtributo == 'C' || primeiroAtributo == 'c') {
        soma1 += pibCapta1;
        soma2 += pibCapta2;
    }

    // Segundo atributo
    if (segundoAtributo == 'P' || segundoAtributo == 'p') {
        soma1 += populacao1;
        soma2 += populacao2;
    } else if (segundoAtributo == 'A' || segundoAtributo == 'a') {
        soma1 += area1;
        soma2 += area2;
    } else if (segundoAtributo == 'I' || segundoAtributo == 'i') {
        soma1 += pib1;
        soma2 += pib2;
    } else if (segundoAtributo == 'T' || segundoAtributo == 't') {
        soma1 += pTuristicos1;
        soma2 += pTuristicos2;
    } else if (segundoAtributo == 'D' || segundoAtributo == 'd') {
        soma1 += densiPopula1;
        soma2 += densiPopula2;
    } else if (segundoAtributo == 'C' || segundoAtributo == 'c') {
        soma1 += pibCapta1;
        soma2 += pibCapta2;
    }

    // Mostrar a soma dos atributos
    printf("Soma dos atributos:\n");
    printf("%s: %lu\n", cidade1, soma1);
    printf("%s: %lu\n", cidade2, soma2);

    // Verificar quem venceu
    if (soma1 > soma2) {
        printf("Resultado: %s venceu!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("Resultado: %s venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
