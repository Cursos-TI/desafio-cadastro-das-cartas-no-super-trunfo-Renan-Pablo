// Super Trunfo - Desenvolvendo a Logica - Nivel Mestre.
#include <stdio.h>
#include <string.h>	
	int main(){
	char cidade1[50], cidade2[50], primeiroAtributo, segundoAtributo;
	unsigned long int populacao1, populacao2, pTuristicos1, pTuristicos2;
	int area1, area2, pib1, pib2, densiPopula1, densiPopula2, pibCapta1, pibCapta2, resultado1, resultado2;
	
	// pre-cadastro da Carta 1.
	strcpy(cidade1, "Sao Paulo");
	populacao1 = 12325000;
	area1 = 1521.11;
	pib1 = 699280000000;
	pTuristicos1 = 50;
	densiPopula1 = 8102;
	pibCapta1 = 56736;
	
	// pre-cadastro da Carta 2.
	strcpy(cidade2, "Rio de Janeiro");
	populacao2 = 6748000;
	area2 = 1200.25;
	pib2 = 300500000000;
	pTuristicos2 = 30;
	densiPopula2 = 5622;
	pibCapta2 = 44531;
	
	// Escolha do 1° atributo.
	printf("Bem-vindo ao Super Trunfo\n");
	printf("Escolha o Primeiro Atributo.\n");
	printf("(P) para Populacao.\n");
	printf("(A) para Area.\n");
	printf("(I) para PIB.\n");
	printf("(T) para Pontos Turisticos.\n");
	printf("(D) para Densidade Populacional.\n");
	printf("(C) para Pib per Capta.\n");
	printf("Escolha: ");
	scanf(" %c", &primeiroAtributo);
	
	switch(primeiroAtributo)
	{
	case 'P':
	case 'p':
		printf("Voce escolheu o atributo Populacao!\n");
		resultado1 = populacao1 > populacao2 ? 1 : 2;	
		break;
	case 'A':
	case 'a':	
		printf("Voce escolheu o atributo Area!\n");
		resultado1 = area1 > area2 ? 1 : 2;
		break;	
	case 'I':
	case 'i':
		printf("Voce escolheu o atributo PIB!\n");
		resultado1 = pib1 > pib2 ? 1 : 2;
		break;
	case 'T':
	case 't':
		printf("Voce escolheu o atributo Pontos Turisticos!\n");
		resultado1 = pTuristicos1 > pTuristicos2 ? 1 : 2;
		break;
	case 'D':
	case 'd':
		printf("Voce escolheu o atributo Densidade Populacional!\n");
		resultado1 = densiPopula1 < densiPopula2 ? 1 : 2;
		break;
	case 'C':
	case 'c':
		printf("Voce escolheu o atributo Pib per Capta!\n");
		resultado1 = pibCapta1 > pibCapta2 ? 1 : 2;
		break;			
	default:
		printf("Ops... Atributo Errado!\n");
		break;
	}
	
	// Escolha do 2° atribudo.
	printf("Escolha o Segundo Atributo.\n");
	printf("(P) para Populacao.\n");
	printf("(A) para Area.\n");
	printf("(I) para PIB.\n");
	printf("(T) para Pontos Turisticos.\n");
	printf("(D) para Densidade Populacional.\n");
	printf("(C) para Pib per Capta.\n");
	printf("Escolha: ");
	scanf(" %c", &segundoAtributo);
	
	
	// Verifica se nao escolheu atributos iguais.
	
	if(primeiroAtributo == segundoAtributo){
		printf("Erro, voce escolheu o mesmo atributo nas duas opcoes.\n");
	} else {
		switch(segundoAtributo)
	{
		case 'P':
		case 'p':
			printf("Voce escolheu o atributo Populacao!\n");
			resultado2 = populacao1 > populacao2 ? 1 : 2;	
			break;
		case 'A':
		case 'a':	
			printf("Voce escolheu o atributo Area!\n");
			resultado2 = area1 > area2 ? 1 : 2;
			break;	
		case 'I':
		case 'i':
			printf("Voce escolheu o atributo PIB!\n");
			resultado2 = pib1 > pib2 ? 1 : 2;
			break;
		case 'T':
		case 't':
			printf("Voce escolheu o atributo Pontos Turisticos!\n");
			resultado2 = pTuristicos1 > pTuristicos2 ? 1 : 2;
			break;
		case 'D':
		case 'd':
			printf("Voce escolheu o atributo Densidade Populacional!\n");
			resultado2 = densiPopula1 < densiPopula2 ? 1 : 2;
			break;
		case 'C':
		case 'c':
			printf("Voce escolheu o atributo Pib per Capta!\n");
			resultado2 = pibCapta1 > pibCapta2 ? 1 : 2;
			break;			
		default:
			printf("Ops... Atribudo Errado!\n");
			break; }	
	}
	printf("Cidades: %s e %s.\n", cidade1, cidade2);
	printf("Atributo 1: ");
	switch (primeiroAtributo) {
    case 'P': case 'p':
        printf("Populacao\n");
        printf("%s: %lu\n", cidade1, populacao1);
        printf("%s: %lu\n", cidade2, populacao2);
        break;
    case 'A': case 'a':
        printf("Area\n");
        printf("%s: %.2f\n", cidade1, area1);
        printf("%s: %.2f\n", cidade2, area2);
        break;
    case 'I': case 'i':
        printf("PIB\n");
        printf("%s: %llu\n", cidade1, pib1);
        printf("%s: %llu\n", cidade2, pib2);
        break;
    case 'T': case 't':
        printf("Pontos Turisticos\n");
        printf("%s: %lu\n", cidade1, pTuristicos1);
        printf("%s: %lu\n", cidade2, pTuristicos2);
        break;
    case 'D': case 'd':
        printf("Densidade Populacional\n");
        printf("%s: %d\n", cidade1, densiPopula1);
        printf("%s: %d\n", cidade2, densiPopula2);
        break;
    case 'C': case 'c':
        printf("PIB per Capta\n");
        printf("%s: %d\n", cidade1, pibCapta1);
        printf("%s: %d\n", cidade2, pibCapta2);
        break;

}	
	printf("Atributo 2: ");
	switch (segundoAtributo) {
		case 'P': case 'p':
        printf("Populacao\n");
        printf("%s: %lu\n", cidade1, populacao1);
        printf("%s: %lu\n", cidade2, populacao2);
        break;
    case 'A': case 'a':
        printf("Area\n");
        printf("%s: %.2f\n", cidade1, area1);
        printf("%s: %.2f\n", cidade2, area2);
        break;
    case 'I': case 'i':
        printf("PIB\n");
        printf("%s: %llu\n", cidade1, pib1);
        printf("%s: %llu\n", cidade2, pib2);
        break;
    case 'T': case 't':
        printf("Pontos Turisticos\n");
        printf("%s: %lu\n", cidade1, pTuristicos1);
        printf("%s: %lu\n", cidade2, pTuristicos2);
        break;
    case 'D': case 'd':
        printf("Densidade Populacional\n");
        printf("%s: %d\n", cidade1, densiPopula1);
        printf("%s: %d\n", cidade2, densiPopula2);
        break;
    case 'C': case 'c':
        printf("PIB per Capta\n");
        printf("%s: %d\n", cidade1, pibCapta1);
        printf("%s: %d\n", cidade2, pibCapta2);
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