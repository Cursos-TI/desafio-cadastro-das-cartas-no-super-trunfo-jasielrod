#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declarando variáveis 
    char estado1, estado2;
    char cod1, cod2[2];
    char cidade1, cidade2;
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int nturisticos1, nturisticos2;

        printf("Desafio Super Trunfo - Países\n");
        printf("Cadastro das Cartas \n");
        printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados)\n");
        scanf("%s", &estado1);
        printf("Agora digite uma letra de 'A' a 'H' para a carta 2\n");
        scanf("%s", &estado2);

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
