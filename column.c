//
// Created by anthi on 15/05/2024.
//

#include "column.h"
#include <stdlib.h>
#include <stdio.h>


COLUMN *create_column(char* titre) {
    COLUMN *col = malloc(sizeof(COLUMN));
    col->titre = titre;
    col->valeurs = NULL;
    col->taille_physique = 0;
    col->taille_logique = 0;
    return col;
}

int insert_value(COLUMN* col, int value){
    if (col->taille_physique >= col->taille_logique)
    {
        col->taille_logique += 256;
        col->valeurs = realloc(col->valeurs,256);
    }
    col->valeurs[col->taille_physique] = value;
    col->taille_physique++;
}

void delete_column(COLUMN **col) {
    if (col && *col) {
        if ((*col)->valeurs) {
            free((*col)->valeurs);
            (*col)->valeurs = NULL;
        }
        free(*col);
        *col = NULL;
    }
}

void print_col(COLUMN* col){
    int i = 0;
    for (i=0; i<col->taille_physique; i++)
    {
        printf("[%d] %d\n",i,col->valeurs[i]);
    }
}


int nbr_occu(COLUMN* col, int val){
    int count = 0;
    int i = 0;
    for (i=0; i<col->taille_physique; i++)
    {
        if (col->valeurs[i] == val)
        {
            count ++;
        }
    }
    printf("le nbr d'occu de %d est %d\n",val,count);
}

int position(COLUMN* col, int x){
    if (x > 0 && x <= col->taille_physique)
    {
        printf("la valeur presente a la position %d est %d\n",x,col->valeurs[x-1]);
    }
    else
    {
        printf("La position est incorrecte !");
    }
}

int nbr_sup(COLUMN* col, int val){
    int count = 0;
    int i = 0;
    for (i=0; i<col->taille_physique; i++)
    {
        if (col->valeurs[i] > val)
        {
            count ++;
        }
    }
    printf("le nbr de valeurs superieures a %d est de %d\n",val,count);
}

int nbr_inf(COLUMN* col, int val){
    int count = 0;
    int i = 0;
    for (i=0; i<col->taille_physique; i++)
    {
        if (col->valeurs[i] < val)
        {
            count ++;
        }
    }
    printf("le nbr de valeurs inferieures a %d est de %d\n",val,count);
}
