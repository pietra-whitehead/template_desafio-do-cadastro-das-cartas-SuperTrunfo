#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Primeira-Carta:

// Para dar início a criação da primeira carta, eu comecei declarando e incializando as variáveis necessárias para armazenar todas as informações da carta.

int main(){
    char estado1[3], estado2[3];
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populaçao1, populaçao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    // Após declarar e inicializar, eu começo a utilizar os especificadores de formato "printf" e "scanf" para dar boas vindas ao jogador e solicitar as infos da primeira carta.

    printf("Olá, Jogador! Bem-vindo ao desafio Super Trunfo - Países! Espero que você esteja pronto para este desafio! Para começar, vamos criar as cartas representando as cidades. \n");
    // Mensagem de boas vindas e introdução ao desafio.

    printf("Para dar início, insira uma letra de A a H para o estado da primeira carta: \n");
    scanf("%s", estado1);
    // Solicitação do estado da primeira carta, utilizando o especificador de formato "scanf" para armazenar a informação na variável "estado1". 

    printf("Sábia escolha! Agora, continue preenchendo inserindo o código da cidade de 01 a 04: \n");
    scanf("%s", codigo1);
    // Solicitação do código da cidade da primeira carta, utilizando o especificador de formato "scanf" para armazenar a informação na variável "codigo1".

    printf("Ótimo! Agora, insira, sem espaços, o nome da cidade: \n");
    scanf("%s", cidade1);
    /* Solicitação do nome da cidade da primeira carta, utilizando o especificador de formato "scanf" para armazenar a informação na variável "cidade1".
    Note que, para armazenar o nome da cidade, foi utilizado um array de caracteres (string) com um tamanho de 50 caracteres, permitindo assim que o jogador insira nomes de cidades
    mais longas, caso deseje. */

    printf("Incrível, agora, preciso que você insira o número de habitantes da sua cidade: \n");
    scanf("%i", &populaçao1);
    // Solicitação do número de habitantes da cidade da primeira carta, utilizando o especificador de formato "scanf" para armazenar a informação na variável "população1"

    printf("Perfeito! Já ultrapassamos da metade da etapa de criação da primeira carta! Agora, somente em números, informe a área da cidade em km²: \n");
    scanf("%f", &area1);
    /* Solicitação da área da cidade da primeira carta, utilizando o especificador de formato "scanf" para armazenar a informação na variável "area1". 
    Note que, eu peço ao jogador que insira a área da cidade somente em números, pois, como sou iniciante no mundo da programação, ainda não tenho a habilidade de lidar com unidades de medida,
    então, para evitar confusões, eu peço que o jogador informe a área da cidade somente em números, sem a unidade de medida "km²". */

    printf("Estamos quase chegando na etapa final! Agora, insira, somente em números,o PIB da sua cidade em bilhões de reais: \n");
    scanf("%f", &pib1);
    /* Solicitação do PIB da cidade da primeira carta, utilizando o especificador de formato "scanf" para armazenar a informação na variável "pib1".
    Note que, assim como na solicitação da área da cidade, eu peço ao jogador que insira o PIB da cidade somente em números, sem a unidade de medida "bilhões de reais", 
    para evitar confusões durante o procedimento de criação da carta. */

    printf("Finalmente estamos no último passo de criação. Para concluir, insira quantos pontos turísticos haverão na sua cidade: \n");
    scanf("%i", &pontosturisticos1);
    /* Chegando na última etapa de criação da carta, eu solicito ao jogador que insira o número de pontos turísticos da cidade na primeira carta, utilizando o especificador 
    de formato "scanf" para armazenar a informação na variável "pontosturisticos1". */

    /* Após solicitar todas as informações necessárias para a criação da primeira carta, eu parabenizo o jogador pelo feito, e exibo de forma resumida, todas as informações da carta
    criada, utilizando o especificador de formato "printf" para exibir as informações armazenadas nas variáveis correspondentes. */
    
    printf("Uau! Parabéns! Você criou a sua primeira carta! Aqui estão as informações da sua carta: \n");

    printf("----------CARTA 1----------- \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s%s \n", codigo1, estado1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %i habitantes \n", populaçao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %i \n", pontosturisticos1);
    printf("Primeira carta concluída! Agora, vamos criar a sua segunda carta, seguindo os mesmos padrões da primeira carta! \n");

    printf("----------CARTA 2----------- \n ");

    printf("Para dar continuidade ao jogo, vamos a criação da sua segunda carta! Para isso, insira uma letra de A até H para o estado da segunda carta: \n");
    scanf("%s", estado2);
    // Solicitação do estado da segunda carta, utilizando o especificador de formato "scanf" para armazenar a informação na variável "estado2". 
    printf("Ótima escolha! Agora, para continuar, insira o código da cidade de 01 a 04: \n");
    scanf("%s", codigo2);
     // Solicitação do código da cidade da segunda carta, utilizando o especificador de formato "scanf" para armazenar a informação na variável "codigo2".
    printf("Perfeito! Agora, insira, sem espaços, o nome da cidade: \n");
    scanf("%s", cidade2);
    /* Solicitação do nome da cidade da segunda carta, utilizando o especificador de formato "scanf" para armazenar a informação na variável "cidade2".
    Note que, para armazenar o nome da cidade, foi utilizado um array de caracteres (string) com um tamanho de 50 caracteres, permitindo assim que o jogador insira nomes de cidades
    mais longas, caso deseje. */
    printf("Incrível, agora, preciso que você insira o número de habitantes da sua cidade: \n");
    scanf("%i", &populaçao2);
    // Solicitação do número de habitantes da cidade da segunda carta, utilizando o especificador de formato "scanf" para armazenar a informação na variável "população2"
    printf("Perfeito! Já ultrapassamos da metade da etapa de criação da segunda carta! Agora, somente em números, informe a área da cidade em km²: \n");
    scanf("%f", &area2);
    /* Solicitação da área da cidade da segunda carta, utilizando o especificador de formato "scanf" para armazenar a informação na variável "area2". 
    Note que, eu peço ao jogador que insira a área da cidade somente em números, pois, como sou iniciante no mundo da programação, ainda não tenho a habilidade de lidar com unidades de medida,
    então, para evitar confusões, eu peço que o jogador informe a área da cidade somente em números, sem a unidade de medida "km²". */
    printf("Estamos quase chegando na etapa final! Agora, insira, somente em números, o PIB da sua cidade: \n");
    scanf("%f", &pib2);
    /* Solicitação do PIB da cidade da segunda carta, utilizando o especificador de formato "scanf" para armazenar a informação na variável "pib2".
    Note que, assim como na solicitação da área da cidade, eu peço ao jogador que insira o PIB da cidade somente em números, sem a unidade de medida "bilhões de reais", 
    para evitar confusões durante o procedimento de criação da carta. */
    printf("Finalmente estamos no último passo de criação. Para concluir, insira quantos pontos turísticos haverão na sua cidade: \n");
    scanf("%i", &pontosturisticos2);
    /* Chegando na última etapa de criação da carta, eu solicito ao jogador que insira o número de pontos turísticos da cidade na segunda carta, utilizando o especificador 
    de formato "scanf" para armazenar a informação na variável "pontosturisticos2". */

    /* Após solicitar todas as informações necessárias para a criação da primeira carta, eu parabenizo o jogador pelo feito, e exibo de forma resumida, todas as informações da carta
    criada, utilizando o especificador de formato "printf" para exibir as informações armazenadas nas variáveis correspondentes. */
    
    printf("Uau! Parabéns! Você criou a sua segunda carta! Aqui estão as informações da sua carta: \n");
    printf("----------CARTA 2----------- \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s%s \n", codigo2, estado2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %i habitantes \n", populaçao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Pontos Turísticos: %i \n", pontosturisticos2);
    printf("Segunda carta concluída! Agora, vamos comparar as suas cartas para descobrir qual é a melhor carta! \n");


    return 0;
}