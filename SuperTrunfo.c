#include <stdio.h>

int main() {
char estado1, estado2;
char codigo1[50], codigo2[50];
char cidade1[60], cidade2[60];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontosturisticos1, pontosturisticos2;

printf("Insira os dados da sua carta 1 abaixo! \n");
printf("De A à H, Qual letra representa o estado da sua carta? \n");
scanf("%c" , &estado1);

printf("Agora insira os dados da sua carta (letra referente ao estado seguido do numero de 01 à 04). \n");
scanf("%s", codigo1);

printf("Qual é o nome da cidade? \n");
scanf("%s", cidade1);

printf("Qual é a população da cidade? \n");
scanf("%d", &populacao1);

printf("Qual é a área da cidade e m km2 \n");
scanf ("%f", &area1);

printf("qual o produto interno bruto (pib) da cidade? \n");
scanf("%f", &pib1);

printf("Quantos pontos turisticos possui essa cidade \n");
scanf("%d", &pontosturisticos1);

printf("carta 1: \n");
printf("estado: %c\n" , estado1);
printf("codigo da carta: %s\n", codigo1);
printf("nome da cidade: %d\n", cidade1);
printf("populacao:%d\n", populacao1);
printf("area: %.2f km2\n", area1);
printf("Pib: %.2f bilhoes de reais\n", area1);
printf("Numero de pontos turisticos: %d\n", pontosturisticos1);

printf("Insira os dados da sua carta 2 abaixo! \n");
printf("De A à H, Qual letra representa o estado da sua carta? \n");
scanf("%c" , &estado2);
getchar();

printf("Agora insira os dados da sua carta (letra referente ao estado seguido do numero de 01 à 04). \n");
scanf("%s", codigo2);

printf("Qual é o nome da cidade? \n");
scanf("%s", cidade2);

printf("Qual é a população da cidade? \n");
scanf("%d", &populacao2);

printf("Qual é a área da cidade e m km2 \n");
scanf ("%f", &area2);

printf("qual o produto interno bruto (pib) da cidade? \n");
scanf("%f", &pib2);

printf("Quantos pontos turisticos possui essa cidade \n");
scanf("%d", &pontosturisticos2);

printf("carta 2: \n");
printf("estado: %c\n" , estado2);
printf("codigo da carta: %s\n", codigo2);
printf("nome da cidade: %d\n", cidade2);
printf("populacao:%d\n", populacao2);
printf("area: %.2f km2\n", area2);
printf("Pib: %.2f bilhoes de reais\n", area2);
printf("Numero de pontos turisticos: %d\n", pontosturisticos2);






}