#include <stdio.h>

int main(){

//Cabeçalho das variantes das cartas 01 e 02.
    char letraestado01, letraestado02;
    char codigo01[10], codigo02[10];
    char cidade01[50], cidade02[50];
    long int habitantes01, habitantes02;
    float area01, area02;
    float pib01, pib02;
    int turisticos01, turisticos02;
    float media1d, media2d;
    float media1p, media2p;
    float media1inv, media2inv;
    int resultadopopula;
    int resultadodens;
    float superpoder1, superpoder2;
    int resultadoarea;
    int resultadopib;
    int resultadoturistico;
    int resultadoper;

    printf("***Jogo Super Trunfo***\n");
    printf("\n");
     printf("***CARTA 01***\n");
    //printf e scanf da carta 01.
    printf("Digite a primeira letra do estado - Carta 01: ");
    scanf("%c", &letraestado01);
    printf("Digite a primeira letra do estado escolhido seguido de uma numeração de 01 a 04: ");
    scanf("%s", &codigo01); 
    printf("Escreva o nome da cidade: ");
    scanf("%s", &cidade01);
    printf("Digite aqui o número de habitantes da cidade: ");
    scanf("%lld", &habitantes01);
    printf("Digite a área da cidade escolhida: ");
    scanf("%f", &area01);
    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib01);
    printf("Por fim, digite o número de pontos turísticos da cidade: ");
    scanf("%d", &turisticos01);

    media1d = habitantes01 / area01;//Divisão para descobrir a densidade populacional
    media1inv = area01 / habitantes01;//Inverso da densidade populacional
    media1p = pib01 / habitantes01;//Divisão para decobrir pib per capita

    printf("***CARTA 02***\n");
//printf e scanf da carta 02.
    printf("Digite a primeira letra do estado - Carta 02: ");
    scanf(" %c", &letraestado02);   
    printf("Digite a primeira letra do estado escolhido seguido de uma numeração de 01 a 04: ");
    scanf("%s", &codigo02);
    printf("Escreva o nome da cidade: ");
    scanf("%s", &cidade02);
    printf("Digite aqui o número de habitantes da cidade: ");
    scanf("%lld", &habitantes02);
    printf("Digite a área da cidade escolhida: ");
    scanf("%f", &area02);
    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib02);
    printf("Por fim, digite o número de pontos turísticos da cidade: ");
    scanf("%d", &turisticos02);
    
    media2d = habitantes02 / area02;//Divisão para descobrir a densidade populacional
    media2inv = area02 / habitantes02;//Inverso da densidade populacional
    media2p = pib02 / habitantes02;//Divisão para decobrir pib per capita
 
    printf("\n");
//printf - impressão do resultado da carta 01
    printf("Carta 01:\n");
    printf("Estado: %c\n", letraestado01);
    printf("Código: %s\n", codigo01);
    printf("Nome da cidade: %s\n", cidade01);
    printf("População: %lld\n", habitantes01);
    printf("Área: %.2fkm²\n", area01);
    printf("PIB: %.2lf\n", pib01);
    printf("Números de pontos turísticos: %d\n", turisticos01);

    printf("Densidade populacional: %.2f hab/km²\n", media1d);
    printf("PIB per Capita: %.2f reais\n", media1p);

    //Utilizei o printf para pular a linha entre a carta 01 e a carta 02
    printf("\n");

//printf - impressão do resultado da carta 02
    printf("Carta 02:\n");
    printf("Estado: %c\n", letraestado02);
    printf("Código: %s\n", codigo02);
    printf("Nome da cidade: %s\n", cidade02);
    printf("População: %lld\n", habitantes02);
    printf("Área: %.2fkm²\n", area02);
    printf("PIB: %.2lf\n", pib02);
    printf("Números de pontos turísticos: %d\n", turisticos02);

    printf("Densidade populacional: %.2f hab/km²\n", media2d);
    printf("PIB per Capita: %.2f reais\n", media2p);
    
    printf("\n");

//printf - impressão comparação
   
    printf("***Comparação***\n");
    printf("\n");
    
    resultadopopula = habitantes01 > habitantes02;
    printf("População: %d\n", resultadopopula);

    resultadoarea = area01 > area02;
    printf("Área: %d\n", resultadoarea);

    resultadopib = pib01 > pib02;
    printf("PIB: %d\n", resultadopib);

    resultadoturistico = turisticos01 > turisticos02;
    printf("Pontos Turísticos: %d\n", resultadoturistico);
    
    resultadodens = area01 / habitantes01 < area02 / habitantes02;
    printf("Densidade Populacional: %d\n", resultadodens);

    resultadoper = media1p > media2p;
    printf("PIB per Capita: %d\n", resultadoper);
    
    superpoder1 = (float) habitantes01 + area01 + pib01 + turisticos01 + pib01 + media1inv;
    superpoder2 = (float) habitantes02 + area02 + pib02 + turisticos02 + pib02 + media2inv;
    printf("Super Poder: %d\n", superpoder1 > superpoder2);


    return 0;


}