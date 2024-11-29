#include <stdio.h>
#include <stdlib.h>
#include "Bib.h"
#include "maBib.c"

int main()
{
    CENTRE C;
    RESULTAT **R;
    int i, s1, s2;
    float cout = 20;
    FILE *f;


    SaisirCentre(&C);
    Affichage(C);
    /*creerfichier(&f);
    remplirfichier(f,20.0,&C);
    afficherfichier(f,C);*/

   // Remplissage(&C, cout);

   /* switch(menu()) {
        case 1:
            Affichage(C);
            break;

        case 2:
            EmployeeMeilleurRendementCentre(C);
            break;

        case 3:
            printf("Donnez le code du service: ");
            scanf("%d", &s1);
            EmployeeMeilleurRendementService(C.services + s1 - 1);
            break;

        case 4:
            ServicePlusDemandee(C);
            break;

        case 5:
            ServicePlusDemandee(C);
            break;

        case 6:
            printf("Donnez le code du service: ");
            scanf("%d", &s2);
            PersonnePlusAncienneService(C.services + s2 - 1);
            break;

        default:
            printf("Option invalide. Veuillez réessayer.\n");
            break;
    }



    for (i = 0; i < C.nb_service; i++) {
        free((C.services + i)->personnes);
        free((C.services + i)->employees);
    }
    free(C.services);
    free(R);

    return 0;*/

}
