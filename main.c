#include <stdio.h>
#include "column.h"

int main()
{
// creer et remplir une colonne

    create_column(char* title)
    insert_value(COLUMN* col, int value)


// afficher des données
    print_col(COLUMN* col)
    nb_occurence(COLUMN* col, int x)
    valeur0_de_x(COLUMN* col, int x)
    valeur1_de_x(COLUMN* col, int x)



//alimentation dataframe
    reation_dataframe(int num_colonne, char **title)
    ajoute_valeur(DataFrame *df)
    ajoute_valeur2(DataFrame *df)


//Affichage du dataframe
    affiche_dataframe(DataFrame *df)
    affiche_partie_ligne_dataframe(DataFrame *df, int limite)
    affiche_partie_colonne_dataframe(DataFrame *df, int limite)


//Opérations usuelles
    ajoute_ligne_dataframe(DataFrame *df, char *nom, int age, float score)
    supprime_ligne_dataframe(DataFrame *df, int indice)
    ajoute_colonne_dataframe(DataFrame *df, char *nom, void *donnée, int longueur)
    supprime_colonne_dataframe(DataFrame *df, int indice)
    nom_colonne_dataframe(DataFrame *df, int index, char *new_name)
    cherche_valeur_dataframe(DataFrame *df, char *value)
    modifie_valeur_dataframe(DataFrame *df, int row, int col, char *new_value)
    affiche_nom_colonne(DataFrame *df)


// Analyse et statistique
    affiche_nbr_ligne(DataFrame *df)
    affiche_nbr_colonne(DataFrame *df)
    br_cellule_value(DataFrame *df, char *x)
    nbr_cellule_valeur_sup(DataFrame *df, float x)
    br_cellule_valeur_inff(DataFrame *df, float x)
}
