#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){


    long long int populacao01, populacao02;
    int pturisticos01, pturisticos02;
    float area01, area02;
    int escolha1Jogador, escolha2Jogador;
    char letraestado01, letraestado02;
    char codigo01[10], codigo02[10];
    char cidade01[50], cidade02[50];
    float pib01, pib02;
    float media1d, media2d;
    float media1p, media2p;
    int resultadopopula;
    int resultadodens;
    float superpoder1, superpoder2;
    int resultadoarea;
    int resultadopib;
    int resultadoturistico;
    int resultadoper;
    int resultado1, resultado2;

    printf("=========================================================\n");
    printf("       Aplicação dos dados do Jogo Super Trunfo\n");
    printf("=========================================================\n");
    printf("\n");
    printf("## CARTA 01 ##\n");
    //printf e scanf da carta 01.
    printf("Digite a primeira letra do estado - Carta 01: ");
    scanf(" %c", &letraestado01);
    printf("Digite a primeira letra do estado escolhido seguido de uma numeração de 01 a 04: ");
    scanf("%s", &codigo01); 
    printf("Escreva o nome da cidade: ");
    scanf("%s", &cidade01);
    printf("Digite aqui o número de habitantes da cidade: ");
    scanf("%lld", &populacao01);
    printf("Digite a área da cidade escolhida: ");
    scanf("%f", &area01);
    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib01);
    printf("Por fim, digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pturisticos01);

    media1d = populacao01 / area01;//Divisão para descobrir a densidade populacional
    printf("---------------------------------------------------------\n");
    printf("## CARTA 02 ##\n");
//printf e scanf da carta 02.
    printf("Digite a primeira letra do estado - Carta 02: ");
    scanf(" %c", &letraestado02);   
    printf("Digite a primeira letra do estado escolhido seguido de uma numeração de 01 a 04: ");
    scanf("%s", &codigo02);
    printf("Escreva o nome da cidade: ");
    scanf("%s", &cidade02);
    printf("Digite aqui o número de habitantes da cidade: ");
    scanf("%lld", &populacao02);
    printf("Digite a área da cidade escolhida: ");
    scanf("%f", &area02);
    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib02);
    printf("Por fim, digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pturisticos02);
    
    media2d = populacao02 / area02;//Divisão para descobrir a densidade populacional

printf("=========================================================\n");
printf("***JOGO SUPER TRUNFO C***\n");
printf("Escolha a primeira opção:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Demográfica\n");
printf("Escolha: ");
scanf("%d", &escolha1Jogador);


switch (escolha1Jogador)
{
case 1:     //AQUI IMPRIME O RESULTADO ESCOLHIDO - POPULAÇÃO
    printf("=========================================================\n");
    printf("Critério escolhido: População\n");
    printf("Resultado: Cidade: (%s) x Cidade: (%s)\n", cidade01, cidade02);
    printf("Cidade: (%s) possui - (%lld) x Cidade: (%s) possui - (%lld)\n", cidade01, populacao01, cidade02, populacao02);
    resultado1 = populacao01 > populacao02 ? 1 : 0;
    if(populacao01 > populacao02){
        
        printf("*** Venceu a carta 01!! ***\n");
} else if (populacao01 < populacao02)
    {
        printf("*** Venceu a carta 02!! ***\n");
    }else if (populacao01 == populacao02)
    {

        printf("***EMPATE***\n");
    }
    
    break;
case 2:     //AQUI IMPRIME O RESULTADO ESCOLHIDO - ÁREA
    printf("=========================================================\n");
    printf("Critério escolhido: Área\n");
    printf("Resultado: Cidade: (%s) x Cidade: (%s)\n", cidade01, cidade02);
    printf("Cidade: (%s) possui - (%.2fkm²) x Cidade: (%s) possui - (%.2fkm²)\n", cidade01, area01, cidade02, area02);
    resultado1 = area01 > area02 ? 1 : 0;
    if(area01 > area02){
        
       printf("*** Venceu a carta 01!! ***\n");
} else if (area01 < area02)
    {
        printf("*** Venceu a carta 02:!! ***\n");
    }else if (area01 == area02)
    {

        printf("***EMPATE***\n");
    }
    
    break;
case 3:       //AQUI IMPRIME O RESULTADO ESCOLHIDO - PIB
    printf("=========================================================\n");
    printf("Critério escolhido: PIB\n");
    printf("Resultado: Cidade: (%s) x Cidade: (%s)\n", cidade01, cidade02);
    printf("Cidade: (%s) possui - (%.2f) x Cidade: (%s) possui - (%.2f)\n", cidade01, pib01, cidade02, pib02);
    resultado1 = pib01 > pib02 ? 1 : 0;
    if(pib01 > pib02){
        
        printf("*** Venceu a carta 01!! ***\n");
} else if (pib01 < pib02)
    {
        printf("*** Venceu a carta 02:!! ***\n");
    }else if (pib01 == pib02)
    {

       printf("***EMPATE***\n");
    }

    break;
case 4:         //AQUI IMPRIME O RESULTADO ESCOLHIDO - PONTOS TURÍSTICOS
    printf("=========================================================\n");
    printf("Critério escolhido: Pontos Turísticos\n");
    printf("Resultado: Cidade: (%s) x Cidade: (%s)\n", cidade01, cidade02);
    printf("Cidade: (%s) possui - (%d) x Cidade: (%s) possui - (%d)\n", cidade01, pturisticos01, cidade02, pturisticos02);
    resultado1 = pturisticos01 > pturisticos02 ? 1 : 0;
    if(pturisticos01 > pturisticos02){
        
        printf("*** Venceu a carta 01!! ***\n");
} else if (pturisticos01 < pturisticos02)
    {
        printf("*** Venceu a carta 02:!! ***\n");
    }else if (pturisticos01 == pturisticos02)
   {

        printf("***EMPATE***\n");
    }
   
    break;
case 5:         //AQUI IMPRIME O RESULTADO ESCOLHIDO - DENSIDADE DEMOGRÁFICA
    printf("=========================================================\n");
    printf("Critério escolhido: Densidade Demográfica\n");
    printf("Resultado: Cidade: (%s) x Cidade: (%s)\n", cidade01, cidade02);
    printf("Cidade: (%s) possui - (%f) x Cidade: (%s) possui - (%f)\n", cidade01, media1d, cidade02, media2d);
    resultado1 = media1d > media2d ? 1 : 0;
    if(media1d < media2d){
        
        printf("*** Venceu a carta 01!! ***\n");
} else if (media2d < media1d)
    {
        printf("*** Venceu a carta 02:!! ***\n");
   }else if (media1d == media2d)
    {

        printf("***EMPATE***\n");
    }
    
    break;
default:
    printf("Opção inválida!\n");
    break;
}
printf("=========================================================\n");
printf("Escolha a segunda opção:\n");
printf("ATENÇÃO: Você não pode escolher o mesmo atributo da primeira opção!\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Demográfica\n");
printf("Escolha: ");
scanf("%d", &escolha2Jogador);

if (escolha1Jogador == escolha2Jogador)
{
    printf("Opção inválida: Você escolheu o mesmo atributo!\n");
}else {
    switch (escolha2Jogador)
    {
    case 1:
    printf("=========================================================\n");
    printf("Critério escolhido: População\n");
    printf("Resultado: Cidade: (%s) x Cidade: (%s)\n", cidade01, cidade02);
    printf("Cidade: (%s) possui - (%lld) x Cidade: (%s) possui - (%lld)\n", cidade01, populacao01, cidade02, populacao02);
    resultado2 = populacao01 > populacao02 ? 1 : 0;
    if(populacao01 > populacao02){
        
        printf("*** Venceu a carta 01!! ***\n");
} else if (populacao01 < populacao02)
    {
        printf("*** Venceu a carta 02!! ***\n");
    }else if (populacao01 == populacao02)
    {

        printf("***EMPATE***\n");
    }
        break;
    case 2:
    printf("=========================================================\n");
    printf("Critério escolhido: Área\n");
    printf("Resultado: Cidade: (%s) x Cidade: (%s)\n", cidade01, cidade02);
    printf("Cidade: (%s) possui - (%.2fkm²) x Cidade: (%s) possui - (%.2fkm²)\n", cidade01, area01, cidade02, area02);
    resultado2 = area01 > area02 ? 1 : 0;
    if(area01 > area02){
        
        printf("*** Venceu a carta 01!! ***\n");
} else if (area01 < area02)
    {
       printf("*** Venceu a carta 02:!! ***\n");
    }else if (area01 == area02)
    {

        printf("***EMPATE***\n");
    }
        break;
    case 3:
    printf("=========================================================\n");
    printf("Critério escolhido: PIB\n");
    printf("Resultado: Cidade: (%s) x Cidade: (%s)\n", cidade01, cidade02);
    printf("Cidade: (%s) possui - (%.2f) x Cidade: (%s) possui - (%.2f)\n", cidade01, pib01, cidade02, pib02);
    resultado2 = pib01 > pib02 ? 1 : 0;
    if(pib01 > pib02){
        
        printf("*** Venceu a carta 01!! ***\n");
} else if (pib01 < pib02)
    {
       printf("*** Venceu a carta 02:!! ***\n");
    }else if (pib01 == pib02)
    {

        printf("***EMPATE***\n");
    }
    
        break;
    case 4:
    printf("=========================================================\n");
    printf("Critério escolhido: Pontos Turísticos\n");
    printf("Resultado: Cidade: (%s) x Cidade: (%s)\n", cidade01, cidade02);
    printf("Cidade: (%s) possui - (%d) x Cidade: (%s) possui - (%d)\n", cidade01, pturisticos01, cidade02, pturisticos02);
    resultado2 = pturisticos01 > pturisticos02 ? 1 : 0;
    if(pturisticos01 > pturisticos02){
        
        printf("*** Venceu a carta 01!! ***\n");
} else if (pturisticos01 < pturisticos02)
    {
        printf("*** Venceu a carta 02:!! ***\n");
    }else if (pturisticos01 == pturisticos02)
   {

        printf("***EMPATE***\n");
    }
        
        break;
    case 5:
    printf("=========================================================\n");
    printf("Critério escolhido: Densidade Demográfica\n");
    printf("Resultado: Cidade: (%s) x Cidade: (%s)\n", cidade01, cidade02);
    printf("Cidade: (%s) possui - (%f) x Cidade: (%s) possui - (%f)\n", cidade01, media1d, cidade02, media2d);
    resultado2 = media1d > media2d ? 1 : 0;
    if(media1d < media2d){
        
        printf("*** Venceu a carta 01!! ***\n");
} else if (media2d < media1d)
    {
        printf("*** Venceu a carta 02!! ***\n");
   }else if (media1d == media2d)
    {

        printf("***EMPATE***\n");
    }
        
        break;
    
    default:
        break;
    }

printf("=========================================================\n");
printf("RESULTADO FINAL\n");

if (resultado1 == 1 && resultado2 == 1) {
    printf("Carta 1 venceu nos dois atributos!\n");
}
else if (resultado1 == 0 && resultado2 == 0) {
    printf("Carta 2 venceu nos dois atributos!\n");
}
else if ((resultado1 == 1 && resultado2 == 0) || (resultado1 == 0 && resultado2 == 1)) {
    printf("Houve empate! Cada carta venceu em um atributo.\n");
}
else {
    printf("Houve um erro ao comparar os resultados.\n");
}
printf("=========================================================\n");

}
return 0;

}