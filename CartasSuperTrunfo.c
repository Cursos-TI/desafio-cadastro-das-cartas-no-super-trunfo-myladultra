#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf ("Desafio super trunfo \n");
    char estado[50];
    char codigo_carta[50];
    char nome_cidade[50];
    int populacao;
    float area, pib;
    int pontos_turisticos;

    printf("Digite seu estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", pib);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

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
