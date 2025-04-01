#include <stdio.h>

int main(){
    
//declaração das variáveis da carta 1
    
    char estado;
    char codigo_da_carta[10], nome_da_cidade[20];
    unsigned long int populacao;
    int qnt_ponto_turistico;
    float area, pib, densidade_pop, pib_per_cap, super;

//Mensagem de instrução para o usuário
    
    printf("\n***Bem vindo ao Super Trunfo de Paises!***\n\n");
    printf("Faca o registro da sua primeira carta:\n\n");

//Registro da primeira carta
    
    printf("Estado (Uma letra de 'A' a 'H', representando um dos oito estados):\n");
    scanf(" %c", &estado);

    printf("Codigo da carta:\n");
    scanf(" %s", &codigo_da_carta);

    printf("Nome da cidade:\n");
    while (getchar() != '\n'); // Limpa o buffer
    scanf(" %19[^\n]", nome_da_cidade);

    printf("Populacao:\n");
    scanf(" %ld", &populacao);

    printf("Area:\n");
    scanf(" %f", &area);

    printf("PIB:\n");
    scanf(" %f", &pib);

    printf("Numeros de pontos turisticos:\n");
    scanf(" %d", &qnt_ponto_turistico);

//Cálculo da densidade populacional e do pib per capita da carta 1

    densidade_pop = (float) populacao/area;

    pib_per_cap = (float) pib/populacao;

// Cálculo do super poder

    super = (float) populacao + qnt_ponto_turistico + area + pib + densidade_pop + pib_per_cap;

//Mensagem de instrução para o usuário
    
    printf("\nCarta 1 registrada com sucesso!\n\nAgora vamos registrar a carta 2\n\n");

//Declaração das variáveis da carta 2
    
    char estado2;
    char codigo_da_carta2[50], nome_da_cidade2[50];
    unsigned long int populacao2;
    int qnt_ponto_turistico2;
    float area2, pib2, densidade_pop2, pib_per_cap2, super2;


//Registro da carta 2
    
    printf("Estado (Uma letra de 'A' a 'H', representando um dos oito estados):\n");
    scanf(" %c", &estado2);

    printf("Codigo da carta:\n");
    scanf(" %s", &codigo_da_carta2);

    printf("Nome da cidade:\n");
    scanf(" %[^\n]", &nome_da_cidade2);

    printf("Populacao:\n");
    scanf(" %ld", &populacao2);

    printf("Area:\n");
    scanf(" %f", &area2);

    printf("PIB:\n");
    scanf(" %f", &pib2);

    printf("Numeros de pontos turisticos:\n");
    scanf(" %d", &qnt_ponto_turistico2);

//Cálculo da densidade populacional e do pib per capita da carta 2

    densidade_pop2 = (float) populacao2/area2;

    pib_per_cap2 = (float) pib2/populacao2;

// Cálculo do super poder da carta 2

    super2 = (float) populacao2 + qnt_ponto_turistico2 + area2 + pib2 + densidade_pop2 + pib_per_cap2;
  
//Exibição dos dados fornecidos pelo usuário
   
    printf("\nCarta 2 registrada com sucesso!\n\n\nEssas sao suas cartas!\n\nCarta 1\n\n---------------------\n");

    printf(" Estado: %c\n Codigo da carta: %s\n Nome da cidade: %s\n Populacao: %ld\n Area: %.2fkm\n PIB: %.2f\n Numeros de pontos turisticos: %d\n Densidade Populacional: %.2f\n PIB Per Capita: %.2f\n Super Poder: %.3f\n", estado, codigo_da_carta, nome_da_cidade, populacao, area, pib, qnt_ponto_turistico, densidade_pop, pib_per_cap, super);
    
    printf("---------------------\n\nCarta 2\n\n---------------------\n");
    
    printf(" Estado: %c\n Codigo da carta: %s\n Nome da cidade: %s\n Populacao: %ld\n Area: %.2fkm\n PIB: %.2f\n Numeros de pontos turisticos: %d\n Densidade Populacional: %.2f\n PIB Per Capita: %.2f\n Super Poder: %.3f\n---------------------", estado2, codigo_da_carta2, nome_da_cidade2, populacao2, area2, pib2, qnt_ponto_turistico2, densidade_pop2, pib_per_cap2, super2);



// Menu interativo para as escolhas dos atributos e resultados
// Atributo 1


 int resultado1, resultado2, comparativo1, comparativo2;

    printf("\n\n***Escolha o atributo das cartas***\n\n");
    printf("\n\nEscolha o primeiro atributo\n\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numeros de pontos turisticos\n");
    printf("5. densidade demografica\n");
    printf("\nEscolha: \n");
    scanf("%d", &comparativo1);

    switch (comparativo1)
    {
    case 1:
        printf("\n**Cidades**\n\n Carta 1: %s\n Carta 2: %s\n\n", nome_da_cidade, nome_da_cidade2);
        printf("**Populacao**\n\n Carta 1: %ld\n Carta 2: %ld\n\n",populacao, populacao2);
        resultado1 = populacao > populacao2 ? 1 : 0;
        
        break;
    case 2:
        printf("\n**Cidades**\n\n Carta 1: %s\n Carta 2: %s\n\n", nome_da_cidade, nome_da_cidade2);
        printf("**Area**\n\n Carta 1: %.2f\n Carta 2: %.2f\n\n",area, area2);
        resultado1 = area > area2 ? 1 : 0;
    
        break;
    case 3:
        printf("\n**Cidades**\n\n Carta 1: %s\n Carta 2: %s\n\n", nome_da_cidade, nome_da_cidade2);
        printf("**PIB**\n\n Carta 1: %.2f\n Carta 2: %.2f\n\n",pib, pib2);
        resultado1 = pib > pib2 ? 1 : 0;

    
        break;
    case 4:
        printf("\n**Cidades**\n\n Carta 1: %s\n Carta 2: %s\n\n", nome_da_cidade, nome_da_cidade2);
        printf("**Pontos Turisticos**\n\n Carta 1: %d\n Carta 2: %d\n\n",qnt_ponto_turistico, qnt_ponto_turistico2);
        resultado1 = qnt_ponto_turistico > qnt_ponto_turistico2 ? 1 : 0;

    
        break;
    case 5:
        printf("\n**Cidades**\n\n Carta 1: %s\n Carta 2: %s\n\n", nome_da_cidade, nome_da_cidade2);
        printf("**Densidade Demografica**\n\n Carta 1: %.2f\n Carta 2: %.2f\n\n",densidade_pop, densidade_pop2);
        resultado1 = densidade_pop < densidade_pop2 ? 1 : 0;
     
        break;

    default:

        printf("Valor invalido");
        break;
    }



// Atributo 2


    if (comparativo1 == comparativo2)
    {
        printf("Voce colocou o mesmo atributo");
    }
    else
    {
    printf("\n\nEscolha o segundo atributo\n\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numeros de pontos turisticos\n");
    printf("5. densidade demografica\n");
    printf("\nEscolha: \n");
    scanf("%d", &comparativo2);

    switch (comparativo2)
    {
    case 1:
        printf("\n**Cidades**\n\n Carta 1: %s\n Carta 2: %s\n\n", nome_da_cidade, nome_da_cidade2);
        printf("**Populacao**\n\n Carta 1: %ld\n Carta 2: %ld\n\n",populacao, populacao2);
        resultado2 = populacao > populacao2 ? 1 : 0;
        
        break;
    case 2:
        printf("\n**Cidades**\n\n Carta 1: %s\n Carta 2: %s\n\n", nome_da_cidade, nome_da_cidade2);
        printf("**Area**\n\n Carta 1: %.2f\n Carta 2: %.2f\n\n",area, area2);
        resultado2 = area > area2 ? 1 : 0;
    
        break;
    case 3:
        printf("\n**Cidades**\n\n Carta 1: %s\n Carta 2: %s\n\n", nome_da_cidade, nome_da_cidade2);
        printf("**PIB**\n\n Carta 1: %.2f\n Carta 2: %.2f\n\n",pib, pib2);
        resultado2 = pib > pib2 ? 1 : 0;

    
        break;
    case 4:
        printf("\n**Cidades**\n\n Carta 1: %s\n Carta 2: %s\n\n", nome_da_cidade, nome_da_cidade2);
        printf("**Pontos Turisticos**\n\n Carta 1: %d\n Carta 2: %d\n\n",qnt_ponto_turistico, qnt_ponto_turistico2);
        resultado2 = qnt_ponto_turistico > qnt_ponto_turistico2 ? 1 : 0;

    
        break;
    case 5:
        printf("\n**Cidades**\n\n Carta 1: %s\n Carta 2: %s\n\n", nome_da_cidade, nome_da_cidade2);
        printf("**Densidade Demografica**\n\n Carta 1: %.2f\n Carta 2: %.2f\n\n",densidade_pop, densidade_pop2);
        resultado2 = densidade_pop < densidade_pop2 ? 1 : 0;
     
        break;

    default:

        printf("Valor invalido");
        break;
    }
    
    
    if (resultado1 && resultado2)
    {
        printf("Carta 1 venceu!");
    }
    else if (resultado1 != resultado2)
    {
        printf("Empatou!");
    }
    else
    {
        printf("Carta 2 venceu!");
    }
    
    
    return 0;
}