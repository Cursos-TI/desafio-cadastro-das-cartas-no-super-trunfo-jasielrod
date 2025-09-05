#include <stdio.h>

int main() {
    // Declaração das variáveis 
    char estado1, estado2; //variável para receber estado representando com uma letra de (A-H)
    char cod1[4], cod2[4]; // variável com array para receber código (EX: A01) até 4 caracteres
    char cidade1[50], cidade2[50]; // variável com array para receber cidade com até 50 caracteres
    int pop1, pop2; // variável tipo inteiro para receber o número de população
    float area1, area2, pib1, pib2, densipop1, densipop2, pibpcapita1, pibpcapita2; // variável tipo flutuante para receber a área em formato Km², Pib, Densidade Populacional e Pip p Capta
    int ptur1, ptur2; // variável tipo inteiro para receber o número de pontos turísticos


    // Título feito com caracteres da tabela ASCII para melhor vizualização e destaque.
    printf("      ╔═══════════════════════════════╗\n");
    printf("      ║  DESAFIO SUPER TRUNFO PAÍSES  ║\n");
    printf("      ╚═══════════════════════════════╝\n \n"); // pulando duas linhas

    // Entrada de dados para a Carta 1
    printf("Insira os dados da Carta 1:\n"); // exibindo mensagem solicitando a inclusão de dados
    printf("Estado (A-H): "); // exibindo mensagem solicitando a inclusão de dados 
    scanf(" %c", &estado1); // recebendo os dados para estado
    printf("Código da Carta (ex: A01): "); // exibindo mensagem solicitando a inclusão de dados codigo da carta
    scanf("%s", cod1); // recebendo os dados para Código e armazenando na variável cod1
    printf("Nome da Cidade: "); // exibindo mensagem solicitando a inclusão de dados Cidade
    scanf("%s", cidade1);  // recebendo os dados para Cidade e armazenando na variável cidade1
    printf("População: "); // exibindo mensagem solicitando a inclusão de dados População
    scanf("%d", &pop1); // recebendo os dados para População e armazenando na variável pop1
    printf("Área (em km²): "); // exibindo mensagem solicitando a inclusão de dados Area
    scanf("%f", &area1); // recebendo os dados para area e armazenando na variável area1
    printf("PIB (em bilhões de reais): "); // exibindo mensagem solicitando a inclusão de dados PIB
    scanf("%f", &pib1); // recebendo os dados para PIP e armazenando na variável pib1
    printf("Número de Pontos Turísticos: ");  // exibindo mensagem solicitando a inclusão de dados Pontos Turísticos
    scanf("%d", &ptur1); // recebendo os dados para Pontos Tur. e armazenando na variável ptur1

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

    densipop1 = (float) pop1 / area1; // Calculo da Densidade Populacional da Carta 1 : população da cidade dividida pela área
    densipop2 = (float) pop2 / area2; // Calculo da Densidade Populacional da Carta 2 : população da cidade dividida pela área
    pibpcapita1 = (float) pib1 / pop1; // calculo do PIP PER CAPITA da Carta 1: PIB da cidade dividido pela população
    pibpcapita2 = (float) pib2 / pop2; // calculo do PIP PER CAPITA da Carta 2: PIB da cidade dividido pela população

    // Exibindo a mensagem de confirmação 
    printf("╔═══════════════════════════════════════╗\n");
    printf("║ A CARTA FOI CADASTRADA COM SUCESSO!!  ║\n");
    printf("╚═══════════════════════════════════════╝\n \n \n");  

    printf("      ╔════════════════════════════════╗\n");
    printf("      ║ EXIBINDO AS CARTAS CADASTRADAS ║\n");
    printf("      ╚════════════════════════════════╝\n \n");

       // Exibindo as cartas na tabela feita com caracteres ASCII para melhor vizualização
        printf("╔═══════════════════════════════════════════════════╗\n");
        printf("║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ CARTA 1 ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ║\n");  
        printf("╠═══════════════════════════════════════════════════╣\n");              
        printf("║ ■ ESTADO:                 %c                       ║\n", estado1);  
        printf("║ ■ CÓDIGO:                 %s                     ║\n", cod1);  
        printf("║ ■ CIDADE:                 %s              \n", cidade1);  
        printf("║ ■ POPULAÇÃO:              %d              \n", pop1);  
        printf("║ ■ ÁREA:                   %.2f Km²        \n", area1);  
        printf("║ ■ PIB:                    %.2f Bilhões    \n", pib1);
        printf("║ ■ PONTOS TURISTICOS:      %d                      ║\n", ptur1);
        printf("║ ■ DENSIDADE POPULACIONAL: %.2f  hab/km²           ║\n", densipop1);
        printf("║ ■ PIB PER CAPITA:         %.2f  Reais             ║\n", pibpcapita1);
        printf("╚═══════════════════════════════════════════════════╝\n \n \n");  

        printf("╔═══════════════════════════════════════════════════╗\n");
        printf("║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ CARTA 2 ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ║\n");  
        printf("╠═══════════════════════════════════════════════════╣\n");              
        printf("║ ■ ESTADO:                 %c                       ║\n", estado2);  
        printf("║ ■ CÓDIGO:                 %s                     ║\n", cod2);  
        printf("║ ■ CIDADE:                 %s              \n", cidade2);  
        printf("║ ■ POPULAÇÃO:              %d              \n", pop2);  
        printf("║ ■ ÁREA:                   %.2f Km²        \n", area2);  
        printf("║ ■ PIB:                    %.2f Bilhões    \n", pib2);
        printf("║ ■ PONTOS TURISTICOS:      %d                      ║\n", ptur2);
        printf("║ ■ DENSIDADE POPULACIONAL: %.2f  hab/km²           ║\n", densipop2);
        printf("║ ■ PIB PER CAPITA:         %.2f  Reais             ║\n", pibpcapita2);
        printf("╚═══════════════════════════════════════════════════╝\n \n \n");  
   
    return 0;
}
