#include <stdio.h>

    int main() {

        char estado1[20];
        char estado2[20];
        char codigo1[30];
        char codigo2[30];
        char nome_cidade1[30];
        char nome_cidade2[30];
        int populacao1;
        int populacao2;
        float area1;
        float area2;
        float pib1;
        float pib2;
        int num_pontos_turisticos1;
        int num_pontos_turisticos2;

        printf("Seja bem bindo ao Super Trunfo: \n\n");  //Mensagem de boas vindas

        printf("Vamos criar duas cartas para jogar Super trunfo! \n");


        // Criando a primeira carta

        printf("Crie sua primeira carta: \n");    

        printf("Digite o nome de um estado: \n");
        scanf("%s", estado1);
        
        printf("Digite uma cidade desse estado: \n");
        scanf("%s", nome_cidade1);
        
        printf("Digite um código para cidade, A01 ou A02: \n");
        scanf("%s", codigo1);

        printf("Digite o número da população da cidade: \n");
        scanf("%d", &populacao1);

        printf("Digite a área da cidade: \n");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib1);

        printf("Digite o número de pontos turisticos: \n");
        scanf("%d", &num_pontos_turisticos1);

        // Criando a segunda carta

        printf("Otimo, agora crie outra carta: \n");       

        printf("Digite o nome de outro estado: \n");
        scanf(" %s", estado2);

        printf("Digite uma cidade desse estado: \n");
        scanf(" %s", nome_cidade2);
        
        printf("Digite um código para cidade, A01 ou A02: \n");
        scanf(" %s", codigo2);

        printf("Digite o número da população da cidade: \n");
        scanf("%d", &populacao2);

        printf("Digite a área da cidade: \n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib2);

        printf("Digite o número de pontos turisticos: \n");
        scanf("%d", &num_pontos_turisticos2);

        // Imprimir as cartas no terminal
        
        printf("Essas são as cartas que você criou: \n\n");

        printf("Carta 01: \n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s \n", codigo1);
        printf("Nome da cidade: %s \n", nome_cidade1);
        printf("População: %d \n", populacao1);
        printf("Área: %.2f km² \n", area1);
        printf("PIB: %.2f Bilhões de reais \n", pib1);
        printf("Número de pontos turisticos: %d \n\n", num_pontos_turisticos1);

        printf("Carta 02: \n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s \n", codigo2);
        printf("Nome da cidade: %s \n", nome_cidade2);
        printf("População: %d \n", populacao2);
        printf("Área: %.2f km² \n", area2);
        printf("PIB: %.2f Bilhões de reais \n", pib2);
        printf("Número de pontos turisticos: %d \n", num_pontos_turisticos2);





        return 0;


    }