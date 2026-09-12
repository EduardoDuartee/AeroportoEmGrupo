#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char Destino[30];
char horario[30];
char empresa[30];
int escolhaDestino;
int escolhaHorario;
int escolhaEmpresa;

void registro()
{
   printf("================================");
    printf("\nAeroporto De Uma Cidade Qualquer");
    printf("\n================================");

    printf("\nQual e o Seu Destino?");
    printf("\n1 - Bahia");
    printf("\n2 - Minas-Gerais");
    printf("\n3 - Mato-Grosso");
    printf("\n4 - Santa-Catarina");
    printf("\n5 - Acre\nOpcao: ");
    scanf("%d", &escolhaDestino);


    if (escolhaDestino == 1) {
        strcpy(Destino, "Bahia");
    } 
    else if (escolhaDestino == 2) {
        strcpy(Destino, "Minas-Gerais");
    } 
    else if (escolhaDestino == 3) {
        strcpy(Destino, "Mato-Grosso");
    } 
    else if (escolhaDestino == 4) {
        strcpy(Destino, "Santa-Catarina");
    } 
    else if (escolhaDestino == 5) {
        strcpy(Destino, "Acre");
    } 
    else {
        printf("\nOpcao Invalida!\n");
        return;
    }


    printf("\n=====================");
    printf("%s", Destino);
    printf("\n=====================");

    printf("\nCocrodile-Poeta");
    printf("\nPomba-Noclear");
    scanf("%d", &escolhaEmpresa);
    if (escolhaEmpresa == 1)
    {
        strcpy(empresa, "Crocodile-Poeta");
    }
    else if (escolhaEmpresa ==2)
    {
         strcpy(empresa, "Pomba-Nuclear");
    }

    printf("\nVoos Disponiveis:");
    printf("\n1 -  09:00h");
    printf("\n2 - 21:00h");
    scanf("%d", &escolhaHorario);
    if (escolhaHorario == 1)
    {
        strcpy(horario, "09:00");
    }
    else if(escolhaHorario == 2)
    {
        strcpy(horario, "21:00");
    }


    printf("\n=====================");
    printf("\n%s", Destino);
    printf("\n%s", empresa);
    printf("\n%s", horario);
    printf("\n=====================");

}