#include <stdio.h>
    
    int main () { 
    
        // Primeiro: Difinir variáveis

        char estado1[15];
        char estado2[15];
        char codigo1[3];
        char codigo2[3];
        char nome1[20];
        char nome2[20];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int numero1, numero2;
        float media, media1, media2, media3;

        // Professor tive bastante dificuldade de entender o desafio por isso a demora, 
        // mas estou feliz em conseguir e enxergar como é simples graças a sua explicação no forúm, obrigado!
        
        printf("================Desafio Super Trunfo===============\n");
        printf("===============Nível Novato==============\n");
        printf("===============Cadastro das cartas===============\n");

        printf("Carta 01:\n");
        
        // Segundo: Leitura das variáveis

        printf("Digite o Estado:\n");
        scanf("%s", &estado1);

        printf("Digite o Código da carta:\n");
        scanf("%s", &codigo1);

        printf("Digite o Nome da Cidade:\n");
        scanf("%s", &nome1);

        printf("Digite a População:\n");
        scanf("%d", &populacao1);

        printf("Digite a Área em km²:\n"),
        scanf("%f", &area1);

        printf("Digite o PIB:\n");
        scanf("%f", &pib1);

        printf("Digite o Número de Pontos Turísticos:\n");
        scanf("%d", &numero1);

        //Nível aventureiro: calculando a densidade populacional e o pib per capita, somar e depois dividir

        media = (populacao1 / area1);
        media1 = (populacao1 / pib1);

        // Terceiro: Imprimir o código

        printf("Estado: %s \n", estado1);
        printf("Código da carta: %s \n", codigo1);
        printf("Nome da cidade: %s \n", nome1);
        printf("População: %d \n", populacao1);
        printf("Área em km²: %f \n", area1);
        printf("PIB: %f \n", pib1);
        printf("Pontos Turísticos: %d \n", numero1);
        printf("A Densidade Populacional é: %.2f\n", media);
        printf("O PIB per Capita é: %.2f\n", media1);

        // Cadastro da segunda carta
    
        printf("Carta 02:\n");

        printf("Digite o Estado:\n");
        scanf("%s", &estado2);

        printf("Digite o Código da carta:\n");
        scanf("%s", &codigo2);

        printf("Digite o Nome da Cidade:\n");
        scanf("%s", &nome2);

        printf("Digite a População:\n");
        scanf("%d", &populacao2);
        printf("Digite a Área em km²:\n"),
        scanf("%f", &area2);

        printf("Digite o PIB:\n");
        scanf("%f", &pib2);

        printf("Digite o Número de Pontos Turísticos:\n");
        scanf("%d", &numero2);
        media2 = (populacao2 / area2);
        media3 = (populacao2 / pib2);

        printf("Estado: %s \n", estado2);
        printf("Código da carta: %s \n", codigo2);
        printf("Nome da cidade: %s \n", nome2);
        printf("População: %d \n", populacao2);
        printf("Área em km²: %f \n", area2);
        printf("PIB: %f \n", pib2);
        printf("Pontos Turísticos: %d \n", numero2);
        printf("A Densidade Populacional é: %.2f\n", media2);
        printf("O PIB per Capita é: %.2f\n", media3);
        



    }