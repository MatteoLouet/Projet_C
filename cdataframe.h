//
// Created by anthi on 21/04/2024.
//

#ifndef CDATAFRAME_CDATAFRAME_H
#define CDATAFRAME_CDATAFRAME_H

#endif //CDATAFRAME_CDATAFRAME_H

/**
 * 1) Alimentation
 */

/**
* @brief : Crée un DataFrame vide
* @param1 : nbr de colonnes
* @param2 : titre des colonnes
* @return : Pointeur pour créer le Dataframe
*/
DataFrame* creation_dataframe(int nbr_colonne, char **titre);

/**
* @brief : Remplissage du CDataframe à partir de saisies utilisateurs
* @param1 : Pointeur du Dataframe
* @return : Pas de retour
*/
void ajoute_valeur(DataFrame *df);

/**
* @brief : Remplissage du Dataframe avec des valeurs préféfinies
* @param1 : Pointeur du Dataframe
* @return : 1 si la valeur à été ajoutée sinon 0
*/
void ajoute_valeur2(DataFrame *df);



/**
* 2) Affichage
*/

/**
* @brief : Affiche tout le dataframe
* @param1 : Pointeur du Dataframe
* @return : les valeurs de chaque colonne du Dataframe
*/
void affiche_dataframe(DataFrame *df);


/**
* @brief : Afficher une partie des lignes du CDataframe selon une limite fournie par l’utilisateur
* @param1 : Pointeur du Dataframe
* @param2 : limite fournie par l'utilisateur
* @return : Elle vérifie d'abord si le DataFrame contient moins de lignes que la limite spécifiée,
 * auquel cas elle utilise le nombre total de lignes du DataFrame. Ensuite, elle parcourt les lignes
 * jusqu'à la limite spécifiée et affiche les valeurs de chaque colonne pour chaque ligne, de manière
 * similaire à la fonction précédente.
*/
void affiche_partie_ligne_dataframe(DataFrame *df, int limite);

/**
* @brief : Afficher une partie des colonnes du CDataframe selon une limite fournie par l’utilisateur
* @param1 : Pointeur du Dataframe
* @param2 : limite fournie par l'utilisateur
* @return : Elle vérifie d'abord si le DataFrame contient moins de colonnes que la limite spécifiée,
 * auquel cas elle utilise le nombre total de colonnes du DataFrame.
 * Ensuite, elle parcourt les colonnes jusqu'à la limite spécifiée et
 * affiche les valeurs de chaque colonne pour chaque ligne.
*/
void affiche_partie_colonne_dataframe(DataFrame *df, int limite);



/**
* Opérations_Usuelles
*/

/**
* @brief : Ajouter une ligne de valeurs au CDataframe
* @param1 : Pointeur du Dataframe
* @param2 : valeur "nom" à ajouter au Dataframe
* @param3 : valeur "age" à ajouter au Dataframe
* @param4 : valeur "score" à ajouter au Dataframe
* @return :  Elle parcourt chaque colonne du DataFrame, alloue de la mémoire pour stocker
 * la nouvelle valeur, insère la valeur dans la colonne appropriée en fonction du nom de la
 * colonne, puis augmente la longueur de la colonne.
*/
void ajoute_ligne_dataframe(DataFrame *df, char *nom, int age, float score);

/**
* @brief : Supprimer une ligne de valeurs du CDataframe
* @param1 : Pointeur du Dataframe
* @param2 : indice de la ligne donnée par l'utilisateur
* @return : Elle vérifie d'abord si l'index est valide. Ensuite,
 * elle parcourt chaque colonne du DataFrame, supprime la valeur à
 * l'index spécifié dans chaque colonne, puis réduit la longueur de la colonne et
 * réalloue la mémoire pour ajuster la taille du tableau de données.
*/
void supprime_ligne_dataframe(DataFrame *df, int indice);

/**
* @brief : Ajouter une colonne au CDataframe
* @param1 : Pointeur du Dataframe
* @param2 : nom de la nouvelle colonne
* @param3 : pointeur vers les données de la nouvelle colonne
* @param4 : longueur des nouvelles données
* @return : Elle augmente d'abord le nombre de colonnes dans le DataFrame,
 * puis réalloue de la mémoire pour le tableau de colonnes pour inclure la nouvelle colonne.
 * Ensuite, elle alloue de la mémoire pour stocker le nom et les données de la nouvelle colonne,
 * copie les données fournies dans la nouvelle colonne et définit sa longueur.
*/
void ajoute_colonne_dataframe(DataFrame *df, char *nom, void *donnée, int longueur);

/**
* @brief : Supprimer une colonne du CDataframe
* @param1 : Pointeur du Dataframe
* @param2 : Indice de la colonne donnée par l'utilisateur
* @return : Elle vérifie d'abord si l'index de la colonne est valide.
 * Ensuite, elle libère la mémoire allouée pour le nom et les données de la colonne à supprimer,
 * puis décale les colonnes suivantes vers la gauche pour remplir l'espace laissé par la suppression.
 * Enfin, elle réduit le nombre de colonnes dans le DataFrame et réalloue la mémoire pour ajuster
 * la taille du tableau de colonnes.
*/
void supprime_colonne_dataframe(DataFrame *df, int indice);

/**
* @brief : Renommer le titre d’une colonne du CDataframe
* @param1 : Pointeur du Dataframe
* @param2 : Indice de la colonne donnée par l'utilisateur
* @param3 : nouveau nom de la colonne
* @return :  Elle vérifie d'abord si l'index de la colonne est valide. Ensuite,
 * elle libère la mémoire allouée pour l'ancien nom de la colonne,
 * alloue de la mémoire pour stocker le nouveau nom et l'assigne à la colonne correspondante.
*/
void nom_colonne_dataframe(DataFrame *df, int indice, char *nouveau_nom;

/**
* @brief : Vérifier l’existence d’une valeur (recherche) dans le CDataframe
* @param1 : Pointeur du Dataframe
* @param2 : valeur à rechercher
* @return : Elle parcourt chaque colonne du DataFrame,
 * puis chaque ligne de chaque colonne pour vérifier si la valeur correspond à celle recherchée.
 * Elle retourne true dès qu'elle trouve la valeur dans le DataFrame,
 * sinon elle retourne false si la valeur n'est pas trouvée.
*/
bool cherche_valeur_dataframe(DataFrame *df, char *valeur);

/**
* @brief : Accéder/remplacer la valeur se trouvant dans une cellule du CDataframe en utilisant son
 * numéro de ligne et de colonne
* @param1 : Pointeur du Dataframe
* @param2 : indice de la ligne
* @param3 : indice de la colonne
* @param4 : la nouvelle valeur
* @return : Elle vérifie d'abord si les indices de ligne et de colonne sont valides.
 * Ensuite, elle remplace la valeur dans la cellule spécifiée en fonction du nom de la colonne
 * et du type de données stockées dans cette colonne.
*/
void modifie_valeur_dataframe(DataFrame *df, int lig, int col, char *nouvelle_valeur);

/**
* @brief : Afficher les noms des colonnes
* @param1 : Pointeur du Dataframe
* @return : La fonction parcourt simplement les colonnes du DataFrame et affiche le nom de chaque colonne.
*/
void affiche_nom_colonne(DataFrame *df);



/**
* Analyse et statistiques
*/

/**
* @brief : Afficher le nombre de lignes
* @param1 : Pointeur du Dataframe
* @return : Cette fonction récupère le nombre de lignes en accédant à la longueur de la première colonne du DataFrame
 * (car toutes les colonnes ont la même longueur dans un DataFrame).
 * Ensuite, elle l'affiche.
*/
void affiche_nbr_ligne(DataFrame *df);

/**
* @brief : Afficher le nombre de colonnes
* @param1 : Pointeur du Dataframe
* @return : Cette fonction parcours toutes les colonnes du DataFrame en incrémentant un compteur de colonnes,
 * puis affiche le nombre total de colonnes.
*/
void affiche_nbr_colonne(DataFrame *df);

/**
* @brief : Nombre de cellules contenant une valeur égale à x (x donné en paramètre)
* @param1 : Pointeur du Dataframe
* @param2 : valeur donnée par l'utilisateur
* @return : Elle parcourt ensuite chaque cellule du DataFrame, vérifie si sa valeur correspond à x,
 * et incrémente un compteur si c'est le cas.
 * Enfin, elle retourne le nombre total de cellules avec la valeur x.
*/
int nbr_cellule_value(DataFrame *df, char *x);

/**
* @brief : Nombre de cellules contenant une valeur supérieure à x (x donné en paramètre)
* @param1 : Pointeur du Dataframe
* @param2 : valeur donnée par l'utilisateur
* @return : Elle parcourt ensuite chaque cellule du DataFrame dans la colonne "Score",
 * vérifie si sa valeur est supérieure à x, et incrémente un compteur si c'est le cas.
 * Enfin, elle retourne le nombre total de cellules avec une valeur supérieure à x.
*/
int nbr_cellule_valeur_sup(DataFrame *df, float x);

/**
* @brief : Nombre de cellules contenant une valeur inférieure à x(x donné en paramètre)
* @param1 : Pointeur du Dataframe
* @param2 : valeur donnée par l'utilisateur
* @return : Elle parcourt ensuite chaque cellule du DataFrame dans la colonne "Score",
 * vérifie si sa valeur est inférieure à x, et incrémente un compteur si c'est le cas.
 * Enfin, elle retourne le nombre total de cellules avec une valeur inférieure à x.
*/
int nbr_cellule_valeur_inff(DataFrame *df, float x);