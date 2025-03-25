#include <stdio.h>

int main(){
    
//declaração das variáveis da carta 1
    
    char estado;
    char codigo_da_carta[10], nome_da_cidade[20];
    unsigned long int populacao;
    int qnt_ponto_turistico, comparativo;
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
    scanf(" %[^\n]", &nome_da_cidade);

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

// Menu interativo para as escolhas dos atributos

    printf("Escolha o atributo das suas cartas\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numeros de pontos turisticos\n");
    printf("5. densidade demografica\n");
    printf("Escolha: \n");
    scanf("%d", &comparativo);

    switch (comparativo)
    {
    case 1:
        
        break;
    case 2:
        
        break;
    case 3:
        
        break;
    case 4:
        
        break;
    case 5:
        
        break;
    default:

        break;
    }

//Resultado da comparação das cartas
//Densidade populacional com o operador NOT

    printf("\nResultado\n\n");

if (populacao>populacao2 || area>area2 || pib>pib2 || qnt_ponto_turistico>qnt_ponto_turistico2 || (!(densidade_pop>densidade_pop2)) || pib_per_cap>pib_per_cap2 || super>super2)
{
    printf("Populacao: Carta 1 venceu!\n");
} 
else if (populacao == populacao2 || area == area2 || pib == pib2 || qnt_ponto_turistico == qnt_ponto_turistico2 || densidade_pop == densidade_pop2 || pib_per_cap == pib_per_cap2 || super == super2)
{    
    printf("Empatou!");
} 
else
{
    printf("Populacao: Carta 2 venceu!\n");
}
    return 0;
}