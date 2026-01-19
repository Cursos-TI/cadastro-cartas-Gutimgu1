#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Carta 1
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //Carta 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

  // Área para entrada de dados

  // Carta 1
    printf("Digite a letra do seu estado: ");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da sua Cidade: ");
    /*scanf("%s", cidade1);*/
    scanf(" %[^\n]s", cidade1); // Lê tudo até encontrar um \n
    // Obs: o espaço antes do % é para consumir qualquer caractere de nova linha pendente no buffer

    printf("Digite o numero total da População: ");
    scanf("%d", &populacao1);

    printf("Digite o total da area da cidade: ");
    scanf("%f", &area1);

    printf("Digite o valor o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de Pontos Turísticos: ");
    scanf("%d", &pontos1);


    // Carta 2
    printf("Digite a letra do seu estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da sua Cidade: ");
    /*scanf("%s", cidade2);*/
    scanf(" %[^\n]s", cidade2); // Lê tudo até encontrar um \n
    // Obs: o espaço antes do % é para consumir qualquer caractere de nova linha pendente no buffer

    printf("Digite o numero total da População: ");
    scanf("%d", &populacao2);

    printf("Digite o total da area da cidade: ");
    scanf("%f", &area2);

    printf("Digite o valor o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos Turísticos: ");
    scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade

  // Exibição dos dados da carta 1.

  printf("Carta 1:\n ");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos1);

  // Exibição dos dados da carta 2.

  printf("Carta 2:\n ");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos2);

return 0;
}
