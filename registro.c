#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char Destino;
int escolhaDestino;
int EmpresadeAviao;
void registro()
{
    printf("================================");
    printf("\nAeroporto De Uma Cidade Qualquer");
    printf("\n================================");

    printf("\nQual é o Seu  Destino?");
    printf("\n1 - Bahia");
    printf("\n2 - Minas-Gerais");
    printf("\n3 - Mato-Grosso");
    printf("\n4 - Santa-Catarina");
    printf("\n5 - Acre");
    scanf("%d", &escolhaDestino);

    switch (escolhaDestino)
    {
    case 1:
        
        printf("\n===============================");
        printf("\n             Bahia             ");
        printf("\n===============================");
        printf("\nSelecione uma Empresa:");

        printf("\n1 - Cocrodile-Poeta");
        printf("\n1 - Pomba-Nuclear");

        scanf("%d", &EmpresadeAviao);

        switch (EmpresadeAviao)
        {
            case 1:
                printf("\n=================================");
                printf("\n       Cocrodile-Poeta           ");
                printf("\n          1 - 14:00h"             );
                printf("\n===============================\n");

               

            break;

            case 2:
                printf("\n=================================");
                printf("\n         Cocrodile-Poeta         ");
                printf("\n=================================");
                printf("\n        2 - 16:00h"               );
            break;
        
            default:
            break;
        }

       
        
    break;

    case 2:
        printf("\n===============================");
        printf("\n         Minas-Gerais          ");
        printf("\n===============================");
         printf("\nSelecione uma Empresa:");

        printf("\n1 - Cocrodile-Poeta");
        printf("\n1 - Pomba-Nuclear");

        scanf("%d", &EmpresadeAviao);

        switch (EmpresadeAviao)
        {
            case 1:
                printf("\n===============================");
                printf("\n       Cocrodile-Poeta         ");
                printf("\n===============================");

            break;

            case 2:
                printf("\n===============================");
                printf("\n        Pomba-Nuclear          ");
                printf("\n===============================");
            break;
        
            default:
            break;
        }
    break;

    case 3:
        printf("\n===============================");
        printf("\n         Mato-Grosso           ");
        printf("\n===============================");
         printf("\nSelecione uma Empresa:");

        printf("\n1 - Cocrodile-Poeta");
        printf("\n1 - Pomba-Nuclear");

        scanf("%d", &EmpresadeAviao);

        switch (EmpresadeAviao)
        {
            case 1:
                printf("\n===============================");
                printf("\n       Cocrodile-Poeta         ");
                printf("\n===============================");

            break;

            case 2:
                printf("\n===============================");
                printf("\n        Pomba-Nuclear          ");
                printf("\n===============================");
            break;
        
            default:
            break;
        }
    break;

    case 4:
        printf("\n===============================");
        printf("\n         Santa-Catarina        ");
        printf("\n===============================");
         printf("\nSelecione uma Empresa:");

        printf("\n1 - Cocrodile-Poeta");
        printf("\n1 - Pomba-Nuclear");

        scanf("%d", &EmpresadeAviao);

        switch (EmpresadeAviao)
        {
            case 1:
                printf("\n===============================");
                printf("\n       Cocrodile-Poeta         ");
                printf("\n===============================");

            break;

            case 2:
                printf("\n===============================");
                printf("\n        Pomba-Nuclear          ");
                printf("\n===============================");
            break;
        
            default:
            break;
        }
    break;

    case 5:
        printf("\n===============================");
        printf("\n             Acre              ");
        printf("\n===============================");
         printf("\nSelecione uma Empresa:");

        printf("\n1 - Cocrodile-Poeta");
        printf("\n1 - Pomba-Nuclear");

        scanf("%d", &EmpresadeAviao);

        switch (EmpresadeAviao)
        {
            case 1:
                printf("\n===============================");
                printf("\n       Cocrodile-Poeta         ");
                printf("\n===============================");

            break;

            case 2:
                printf("\n===============================");
                printf("\n        Pomba-Nuclear          ");
                printf("\n===============================");
            break;
        
            default:
            break;
        }
    break;
    
    default:
    break;
    }


}