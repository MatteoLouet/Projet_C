//
// Created by anthi on 15/05/2024.
//

#include "column.c"
#include "cdataframe.h"
#include <stdlib.h>
#include <stdio.h>

CDATAFRAME *create_cdataframe(char* titre) {
    CDATAFRAME *lig = malloc(sizeof(CDATAFRAME));
    lig->tab_titre = titre;
    lig->tab_val = NULL;
    lig->taille_physique = 0;
    lig->taille_logique = 0;
    return lig;
}

void replissge_dataframe(CDATAFRAME* lig, COLUMN* col){
    if (lig->taille_physique >= lig->taille_logique)
    {
        lig->taille_logique += 256;
        lig->tab_val = realloc(lig->tab_val,256);
    }
    printf("quel titre voulez-vous pour votre colonne ? :");
    scanf("%c\n",&titre);
    COLUMN *titre = create_column(titre);
    printf("Cb de valeurs voulez-vous saisir ? : ");
    scanf("%d\n",&nbr);
    for(i=0; i < nbr; i++)
    {
        printf("Veuillez saisir une valeur : ");
        scanf("%d",&val);
        insert_value(titre, val);

    }
    lig->tab_val[lig->taille_physique] = col->valeurs ;
    lig->taille_physique++;

}
