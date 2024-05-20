//
// Created by anthi on 21/04/2024.
//

#include <stdlib.h>
#include <string.h>

typedef struct {
    COLUMN **tab_val;
    int taille_physique;
    int taille_logique;

} CDATAFRAME;

int temp = 0;
int nbr;
int i;
int j;
int val;
int max_nbr = 0;
char new_line[100];
