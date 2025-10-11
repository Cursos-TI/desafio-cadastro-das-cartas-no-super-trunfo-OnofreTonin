#include <stdio.h>

int main()
{
    int atributosescolhido;
    char state;
    printf("De A a H escolha uma letra\n");
    scanf(" %c", &state);

    char code[4];
    printf("Agora com a letra escolhida acima escolha um número de 01 a 04\n");
    scanf(" %3s", code);

    char city[30];
    printf("Agora diga o nome da cidade\n");
    while (getchar() != '\n')
        ; // limpando buffer
    fgets(city, 30, stdin);

    unsigned long int population;
    printf("Diga quantas pessoas tem:\n");
    scanf(" %u", &population);

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
    densidade = (float)population / area; // fazendo o calculo de pibpercapt fazendo o cast das váriaveis population e area
    float pibpercapt;
    pibpercapt = (float)pib / population; // fazendo o calculo de pibpercapt fazendo o cast das váriaveis pib e population
    float Superpoder;
    Superpoder = (population + area + pib + numtur + pibpercapt) / densidade;
    printf("*¨¨Carta 01¨¨*\n");
    printf("Estado %c\n", state);
    printf("Código %s\n", code);
    printf("Nome da cidade %s", city);
    printf("População %u\n", population);
    printf("Área %.2f\n", area);
    printf("PIB:%.2f\n", pib);
    printf("Pontos túristicos: %d\n", numtur);
    printf("Densidade Populacional %.1f  hab/km²\n", densidade);
    printf("Pib perCapita: %.2f\n", pibpercapt);
    printf("Super Poder %.2f\n", Superpoder);

    char state2;
    printf("De A a H escolha uma letra\n");
    scanf(" %c", &state2);

    char code2[4];
    printf("Agora com a letra escolhida acima escolha um número de 01 a 04\n");
    scanf(" %3s", code2);

    char city2[30];
    printf("Agora diga o nome da cidade\n");
    while (getchar() != '\n')
        ; // limpando buffer
    fgets(city2, 30, stdin);

    unsigned long int population2;
    printf("Diga quantas pessoas tem:\n");
    scanf(" %u", &population2);

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
    densidade2 = (float)population2 / area2; // fazendo o calculo de pibpercapt fazendo o cast das váriaveis population2 e area2
    float pibpercapt2;
    pibpercapt2 = (float)pib2 / population2; // fazendo o calculo de pibpercapt fazendo o cast das váriaveis pib2 e population2
    float Superpoder2;
    Superpoder2 = (population2 + area2 + pib2 + numtur2 + pibpercapt2) / densidade2;
    printf("*¨¨Carta 02¨¨*\n");
    printf("Estado %c\n", state2);
    printf("Código %s\n", code2);
    printf("Nome da cidade %s", city2);
    printf("População %u\n", population2);
    printf("Área %f\n", area2);
    printf("PIB:%f\n", pib2);
    printf("Pontos túristicos: %d\n", numtur2);
    printf("Densidade Populacional %.1f  hab/km²\n", densidade2);
    printf("Pib perCapita: %.2f\n", pibpercapt2);
    printf("Super Poder %f\n", Superpoder2);

    printf("**Cartas cadastradas com sucesso!**\n");
    printf("Escolha um dos atributos abaixo para comparação\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3.PIB\n");
    printf("4. Pontos Túristico\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", atributosescolhido);

    switch (atributosescolhido)
    {
    case 1:
        printf("Carta 1: %c, Carta 2: %c\n", state, state2);
        printf("Atributo de comparação: População\n");
        printf("Carta 1 vale: %u, Carta 2 vale: %u \n", population, population2);
        if (population > population2)
        {
            printf("Carta 1 Venceu!\n");
        }
        else if (population == population2)
        {
            printf("Empate!\n");
        }
        else
        {
            printf("Carta 2 Venceu!\n");
        }

        break;
    case 2:
        printf("Carta 1: %c, Carta 2: %c\n", state, state2);
        printf("Atributo de comparação: Área\n");
        printf("Carta 1 vale: %f, Carta 2 vale: %f \n", area, area2);
        if (area > area2)
        {
            printf("Carta 1 Venceu!\n");
        }
        else if (area == area2)
        {
            printf("Empate!\n");
        }
        else
        {
            printf("Carta 2 Venceu!\n");
        }

        break;
    case 3:
        printf("Carta 1: %c, Carta 2: %c\n", state, state2);
        printf("Atributo de comparação: PIB\n");
        printf("Carta 1 vale: %f, Carta 2 vale: %f \n", pib, pib2);
        if (pib > pib2)
        {
            printf("Carta 1 Venceu!\n");
        }
        else if (pib == pib2)
        {
            printf("Empate!\n");
        }
        else
        {
            printf("Carta 2 Venceu!\n");
        }
        break;
    case 4:
        printf("Carta 1: %c, Carta 2: %c\n", state, state2);
        printf("Atributo de comparação: Pontos Turístico \n");
        printf("Carta 1 vale: %d, Carta 2 vale: %d \n", numtur, numtur2);
        if (numtur > numtur2)
        {
            printf("Carta 1 Venceu!\n");
        }
        else if (numtur == numtur2)
        {
            printf("Empate!\n");
        }
        else
        {
            printf("Carta 2 Venceu!\n");
        }
        break;
    case 5:
        printf("Carta 1: %c, Carta 2: %c\n", state, state2);
        printf("Atributo de comparação: Área\n");
        printf("Carta 1 vale: %f, Carta 2 vale: %f \n", densidade, densidade2);
        if (densidade > densidade2)
        {
            printf("Carta 1 Venceu!\n");
        }
        else if (densidade == densidade2)
        {
            printf("Empate!\n");
        }
        else
        {
            printf("Carta 2 Venceu!\n");
        }
        break;
    default:
        printf("Número inválido");
        break;
    }

    /*Modelo de saída
    Comparação de Cartas:

    População: Carta 1 venceu (1)a

    Área: Carta 1 venceu (1)

    PIB: Carta 1 venceu (1)

    Pontos Turísticos: Carta 1 venceu (1)

    Densidade Populacional: Carta 2 venceu (0)

    PIB per Capita: Carta 1 venceu (1)

    Super Poder: Carta 1 venceu (1)
    */

    /*char *resultado[] = {"Carta 2", "Carta 1"};
    // 0 = Carta 2 e 1 = Carta 1

    printf("*¨¨Comparação de Cartas¨¨*\n");
    printf("População: %s venceu \n", resultado[population > population2]); // resultado[0] ou resultado [1]
    printf("Área: %s venceu\n", resultado[area > area2]);
    printf("PIB: %s venceu \n", resultado[pib > pib2]);
    printf("Pontos Turísticos: %s venceu)\n", resultado[numtur > numtur2]);
    printf("Densidade Populacional: %s venceu\n", resultado[densidade > densidade2]);
    printf("PIB per Capita: %s venceu\n", resultado[pibpercapt > pibpercapt2]);
    printf("SuperPoder: %s venceu\n", resultado[Superpoder > Superpoder2]);*/
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