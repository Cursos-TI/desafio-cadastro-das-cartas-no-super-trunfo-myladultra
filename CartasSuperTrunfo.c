#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste camila dutra

int main() {
    printf ("Desafio super trunfo \n");
    char estado1[50], codigo_carta1[50], nome_cidade1[50]; //variaveis char da carta 1;
    int populacao1, pontos_turisticos1; //variaveis inteiras da carta 1;
    float area1, pib1; //variaveis f da carta 1;

    char estado2[50], codigo_carta2[50], nome_cidade2[50]; //variaveis char da carta 2;
    int populacao2, pontos_turisticos2; //variaveis inteiras da carta 2;
    float area2, pib2; //variaveis f da carta 2;

    printf("== Cadastro da Carta 1 ==\n");
    printf("Digite seu estado: \n");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o pib: \n");
    scanf("%f", pib1);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("== Cadastro da Carta 2 ==\n"); 
    printf("Digite seu estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", pib2);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);
    

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
