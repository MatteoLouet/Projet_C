//
// Created by anthi on 15/05/2024.
//

#include "column.h"
#include <stdlib.h>
#include <stdio.h>


COLUMN *create_column(char* titre) {           // fonction qui va prendre un titre en paramètre et renvoyer une colonne associée
    COLUMN *col = malloc(sizeof(COLUMN));
    col->titre = titre;
    col->valeurs = NULL;
    col->taille_physique = 0;
    col->taille_logique = 0;
    return col;
}

void insert_value(COLUMN* col, int value){     // fonction qui va insérer une valeur dans la colonne 

    if (col->taille_physique >= col->taille_logique)
    {
        col->taille_logique += 256;
        col->valeurs = realloc(col->valeurs,256 * sizeof(int));
    }
    col->valeurs[col->taille_physique] = value;
    col->taille_physique++;
}

void delete_column(COLUMN *col) {                // fonction qui va permettre de supprimer une colonne et de supprimer les valeurs de la mémoire

    if (col->valeurs) {
        free(col->valeurs);
        col->valeurs = NULL;

        free(col);
        col = NULL;
    }
}

void print_col(COLUMN* col){                    // fonction qui servira à afficher les colonnes 
    for (i=0; i<col->taille_physique; i++)
    {
        printf("[%d] %d\n",i,col->valeurs[i]);
    }
}


int nbr_occu(COLUMN* col, int val){            // fonction qui va renvoyer le nombre d'occurence d'une valeur dans la colonne 
    int count = 0;
    for (i=0; i<col->taille_physique; i++)
    {
        if (col->valeurs[i] == val)
        {
            count ++;
        }
    }
    return count;
}

void position(COLUMN* col, int x){            // return la position d'une valeur entrée en paramètre 
    if (x > 0 && x <= col->taille_physique)
    {
        printf("la valeur presente a la position %d est %d\n",x,col->valeurs[x-1]);
    }
    else
    {
        printf("La position est incorrecte !");
    }
}

void nbr_sup(COLUMN* col, int val){                    // renvoie le nombre de valeurs supéieure à une valeur "val" entrée en paramètre 
    int count = 0;
    for (i=0; i<col->taille_physique; i++)
    {
        if (col->valeurs[i] > val)
        {
            count ++;
        }
    }
    printf("le nbr de valeurs superieures a %d est de %d\n",val,count);
}

void nbr_inf(COLUMN* col, int val){                    // meme chose avec les nombres inférieurs 
    int count = 0;
    for (i=0; i<col->taille_physique; i++)
    {
        if (col->valeurs[i] < val)
        {
            count ++;
        }
    }
    printf("le nbr de valeurs inferieures a %d est de %d\n",val,count);
}
