#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char cod1[4];
    char cidade1[50];
    int pop1;
    float area1;
    float pib1;
    int ptur1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char cod2[4];
    char cidade2[50];
    int pop2;
    float area2;
    float pib2;
    int ptur2;

    // Título feito com caracteres da tabela ASCII para melhor vizualização e destaque.
    printf("      ╔═══════════════════════════════╗\n");
    printf("      ║  DESAFIO SUPER TRUNFO PAÍSES  ║\n");
    printf("      ╚═══════════════════════════════╝\n \n");

    // Entrada de dados para a Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", cod1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1); 
    printf("População: ");
    scanf("%d", &pop1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &ptur1);

    // Exibindo a mensagem de confirmação 
    printf("╔═══════════════════════════════════════╗\n");
    printf("║ A CARTA FOI CADASTRADA COM SUCESSO!!  ║\n");
    printf("╚═══════════════════════════════════════╝\n");  

    // Entrada de dados para a Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", cod2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2); 
    printf("População: ");
    scanf("%d", &pop2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &ptur2);

    // Exibindo a mensagem de confirmação 
    printf("╔═══════════════════════════════════════╗\n");
    printf("║ A CARTA FOI CADASTRADA COM SUCESSO!!  ║\n");
    printf("╚═══════════════════════════════════════╝\n \n \n");  

    printf("      ╔════════════════════════════════╗\n");
    printf("      ║ EXIBINDO AS CARTAS CADASTRADAS ║\n");
    printf("      ╚════════════════════════════════╝\n \n");

       // Exibindo as cartas na tabela feita com caracteres ASCII para melhor vizualização
        printf("╔═════════════════════════════════════╗\n");
        printf("║▒▒▒▒▒▒▒▒▒▒▒▒▒▒ CARTA 1 ▒▒▒▒▒▒▒▒▒▒▒▒▒ ║\n");  
        printf("╠═════════════════════════════════════╣\n");              
        printf("║ ■ ESTADO:    %c                      ║\n", estado1);  
        printf("║ ■ CÓDIGO:    %s                    ║\n", cod1);  
        printf("║ ■ CIDADE:    %s              \n", cidade1);  
        printf("║ ■ POPULAÇÃO: %d              \n", pop1);  
        printf("║ ■ ÁREA:      %.2f Km²        \n", area1);  
        printf("║ ■ PIB:       %.2f Bilhões    \n", pib1);
        printf("║ ■ PONTOS T.: %d                      ║\n", ptur1);
        printf("╚═════════════════════════════════════╝\n \n \n");  

        printf("╔════════════════════════════════════╗\n");
        printf("║▒▒▒▒▒▒▒▒▒▒▒▒▒▒ CARTA 2 ▒▒▒▒▒▒▒▒▒▒▒▒ ║\n");  
        printf("╠════════════════════════════════════╣\n");              
        printf("║ ■ ESTADO:    %c                     ║\n", estado2);  
        printf("║ ■ CÓDIGO:    %s                   ║\n", cod2);  
        printf("║ ■ CIDADE:    %s               \n", cidade2);  
        printf("║ ■ POPULAÇÃO: %d               \n", pop2);  
        printf("║ ■ ÁREA:      %.2f Km²         \n", area2);  
        printf("║ ■ PIB:       %.2f Bilhões     \n", pib2);
        printf("║ ■ PONTOS T.: %d                     ║\n", ptur2);
        printf("╚════════════════════════════════════╝\n \n \n");  
   
    return 0;
}
