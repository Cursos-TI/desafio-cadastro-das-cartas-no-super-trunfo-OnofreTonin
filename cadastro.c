#include <stdio.h>

int main (){

    char state;
    printf("De A a H escolha uma letra\n");
    scanf(" %c", &state);

    char code[4];
    printf("Agora com a letra escolhida acima escolha um número de 01 a 04\n");
    scanf(" %3s", code); 

    char city[30];
    printf("Agora diga o nome da cidade\n");
    while (getchar() != '\n'); // limpando buffer
    fgets(city, 30, stdin);

    int population;
    printf("Diga quantas pessoas tem:\n");
    scanf(" %d", &population);

    float area;
    printf("Qual é a area dessa cidade?\n");
    scanf(" %f", &area);

    float pib;
    printf("Informe o pib desta cidade\n");
    scanf(" %f", &pib);

    int numtur;
    printf("Informe quantos pontos turisticos tem nesta cidade\n");
    scanf(" %d", &numtur);


    float densidade;
    densidade = (float) population/area; //fazendo o calculo de pibpercapt fazendo o cast das váriaveis population e area
    float pibpercapt;
    pibpercapt = (float) pib/population; //fazendo o calculo de pibpercapt fazendo o cast das váriaveis pib e population
    printf("*¨¨Carta 01¨¨*\n");
    printf("Estado %c\n", state);
    printf("Código %s\n", code);
    printf("Nome da cidade %s", city);
    printf("População %d\n", population);
    printf("Área %.3f\n", area);
    printf("PIB:%.3f\n", pib);
    printf("Pontos túristicos: %d\n", numtur);
    printf("Densidade Populacional %.1f  hab/km²\n", densidade);
    printf("Pib perCapita: %.2f\n", pibpercapt);

    char state2;
    printf("De A a H escolha uma letra\n");
    scanf(" %c", &state2);

    char code2[4];
    printf("Agora com a letra escolhida acima escolha um número de 01 a 04\n");
    scanf(" %3s", code2); 

    char city2[30];
    printf("Agora diga o nome da cidade\n");
    while (getchar() != '\n'); // limpando buffer
    fgets(city2, 30, stdin);

    int population2;
    printf("Diga quantas pessoas tem:\n");
    scanf(" %d", &population2);

    float area2;
    printf("Qual é a area dessa cidade?\n");
    scanf(" %f", &area2);

    float pib2;
    printf("Informe o pib desta cidade\n");
    scanf(" %f", &pib2);

    int numtur2;
    printf("Informe quantos pontos turisticos tem nesta cidade\n");
    scanf(" %d", &numtur2);

    float densidade2;
    densidade2 = (float) population2/area2; //fazendo o calculo de pibpercapt fazendo o cast das váriaveis population2 e area2
    float pibpercapt2;
    pibpercapt2 = (float) pib2/population2; //fazendo o calculo de pibpercapt fazendo o cast das váriaveis pib2 e population2
    printf("*¨¨Carta 02¨¨*\n");
    printf("Estado %c\n", state2);
    printf("Código %s\n", code2);
    printf("Nome da cidade %s", city2);
    printf("População %d\n", population2);
    printf("Área %f\n", area2);
    printf("PIB:%f\n", pib2);
    printf("Pontos túristicos: %d\n", numtur2);
    printf("Densidade Populacional %.1f  hab/km²\n", densidade2);
    printf("Pib perCapita: %.2f\n", pibpercapt2);





}

/* Modelo da formatação
Estado: A

Código: A01

Nome da Cidade: São Paulo

População: 12325000

Área: 1521.11 km²

PIB: 699.28 bilhões de reais

Número de Pontos Turísticos: 50

*/