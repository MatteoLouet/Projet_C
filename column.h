#ifndef UNTITLED_FONCTIONS_H
#define UNTITLED_FONCTIONS_H

#endif

#include <stdlib.h>
#include <string.h>


/**
 * Create a column
 * @param1 : Column title
 * @return : Pointer to created column
 */
COLUMN *create_column(char* title);



/**
 * @brief : Add a new value to a column
 * @param1 : Pointer to a column
 * @param2 : The value to be added
 * @return : 1 if the value is added 0 otherwise
 */
int insert_value(COLUMN* col, int value);



/**
* @brief : Free allocated memory * @param1 : Pointer to a column */
void delete_column(COLUMN **col);


/**
 * @brief: Print a column content
 * @param: Pointer to a column
 */
void print_col(COLUMN* col);



/**
 * @brief : Retourner le nombre de d’occurrences d’une valeur x
 * @param1 : x
 * @param2 : colonne
 * @return : occurence d'x
 */
void nb_occurence(COLUMN* col, int x)

/**
 * @brief : Retourner la valeur présente à la position x
 * @param1 : x
 * @param2 : colonne
 * @return : valeur
 */
void valeur_de_x(COLUMN* col, int x)


/**
 * @brief : Retourner le nombre de valeurs qui sont supérieures à x
 * @param1 : x
 * @param2 : colonne
 * @return : nombre de valeurs
 */
void valeur_de_x(COLUMN* col, int x)


/**
 * @brief : Retourner le nombre de valeurs qui sont inférieures à x
 * @param1 : x
 * @param2 : colonne
 * @return : nombre de valeurs
 */
void valeur2_de_x(COLUMN* col, int x)


/**
 * @brief : Retourner le nombre de valeurs qui sont égales à x (x donné en paramètre).
 * @param1 : x
 * @param2 : colonne
 * @return : nombre de valeurs
 */
void valeur3_de_x(COLUMN* col, int x)


