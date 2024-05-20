//
// Created by anthi on 15/05/2024.
//


#include "column.c"
#include "cdataframe.h"

CDATAFRAME *create_cdataframe() {
    CDATAFRAME *lig = malloc(sizeof(CDATAFRAME));
    lig->tab_val = NULL;
    lig->taille_physique = 0;
    lig->taille_logique = 0;
    return lig;
}

void remlissge_dur_dataframe(CDATAFRAME* lig,char titre[100],int nbr) {


    COLUMN *col = create_column(titre);
    if(nbr > max_nbr){max_nbr=nbr;}
    for (i = 0; i < nbr; i++) {
        if (lig->taille_physique >= lig->taille_logique) {
            lig->taille_logique += 256;
            lig->tab_val = realloc(lig->tab_val, lig->taille_logique * sizeof(int*));
            for (int j = lig->taille_physique; j < lig->taille_logique; j++) {
                lig->tab_val[j] = NULL;
            }
        }

        val = (rand() % 101)+1;

        insert_value(col, val);

        // Allocate memory for the new row if necessary
        if (lig->tab_val[lig->taille_physique] == NULL) {
            lig->tab_val[lig->taille_physique] = malloc(col->taille_physique * sizeof(int));
        } else {
            lig->tab_val[lig->taille_physique] = realloc(lig->tab_val[lig->taille_physique], col->taille_physique * sizeof(int));
        }
    }
    lig->tab_val[lig->taille_physique] = col;
    lig->taille_physique ++;
}


void remlissge_dataframe(CDATAFRAME* lig,char titre[100]) {


    COLUMN *col = create_column(titre);
    printf("Combien de valeurs voulez-vous ajouter ? : ");
    if (scanf("%d", &nbr) != 1) {
        printf("Erreur lors de la saisie du nombre de valeurs.\n");
        return;
    }
    if(nbr > max_nbr){max_nbr=nbr;}
    for (i = 0; i < nbr; i++) {
        if (lig->taille_physique >= lig->taille_logique) {
            lig->taille_logique += 256;
            lig->tab_val = realloc(lig->tab_val, lig->taille_logique * sizeof(int*));
            for (int j = lig->taille_physique; j < lig->taille_logique; j++) {
                lig->tab_val[j] = NULL;
            }
        }

        printf("Veuillez saisir une valeur : ");
        if (scanf("%d", &val) != 1) {
            printf("Erreur lors de la saisie de la valeur.\n");
            return;
        }

        insert_value(col, val);

        // Allocate memory for the new row if necessary
        if (lig->tab_val[lig->taille_physique] == NULL) {
            lig->tab_val[lig->taille_physique] = malloc(col->taille_physique * sizeof(int));
        } else {
            lig->tab_val[lig->taille_physique] = realloc(lig->tab_val[lig->taille_physique], col->taille_physique * sizeof(int));
        }
    }
    lig->tab_val[lig->taille_physique] = col;
    lig->taille_physique ++;
}

void affiche_dataframe(CDATAFRAME* lig){
    printf("\n");
    for (i=0; i < lig->taille_physique; i++)
    {
        printf("%s\t", lig->tab_val[i]->titre);
    }
    for (i=0; i < max_nbr; i++)
    {
        printf("\n");
        printf("%d\t",lig->tab_val[0]->valeurs[i]);
        for (j=1; j < lig->taille_physique; j++)
        {
            if(lig->tab_val[j]->valeurs[i] == '\0')
            {
                printf("NULL\t");
            }
            else
            {
                printf("%d\t", lig->tab_val[j]->valeurs[i]);
            }

        }
    }
}

void affiche_partiel_ligne(CDATAFRAME* lig,int lim1,int lim2){
    printf("\n");
    for (i=0; i < lig->taille_physique; i++)
    {
        printf("%s\t", lig->tab_val[i]->titre);
    }
    for (i=lim1-1; i < lim2; i++)
    {
        printf("\n");
        printf("%d\t",lig->tab_val[0]->valeurs[i]);
        for (j=1; j < lig->taille_physique; j++)
        {
            if(lig->tab_val[j]->valeurs[i] == '\0')
            {
                printf("NULL\t");
            }
            else
            {
                printf("%d\t", lig->tab_val[j]->valeurs[i]);
            }

        }
    }
}

void affiche_partiel_colonne(CDATAFRAME* lig,int lim1,int lim2){
    printf("\n");
    for (i=lim1-1; i < lim2; i++)
    {
        printf("%s\t", lig->tab_val[i]->titre);
    }
    for (i=0; i < max_nbr; i++)
    {
        printf("\n");
        printf("%d\t",lig->tab_val[0]->valeurs[i]);
        for (j=lim1; j < lim2; j++)
        {
            if(lig->tab_val[j]->valeurs[i] == '\0')
            {
                printf("NULL\t");
            }
            else
            {
                printf("%d\t", lig->tab_val[j]->valeurs[i]);
            }

        }
    }
}

