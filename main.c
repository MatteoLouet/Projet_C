//
// Created by anthi on 21/04/2024.
//
#include "cdataframe.c"

int z = 0 ;
char titre_col[] = "col_";
char num[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


int main() {


    COLUMN *col = create_column("My column");
    insert_value(col, 5);
    insert_value(col, 10);
    insert_value(col, 15);
    print_col(col);
    nbr_occu(col, 10);
    position(col, 1);
    nbr_sup(col, 5);
    nbr_inf(col, 10);
    delete_column(col);

    CDATAFRAME *lig = create_cdataframe();
    printf("Cb de colonne voulez-vous ? : ");
    scanf("%d",&temp);
    printf("Combien de valeurs voulez-vous ajouter ? : ");
    scanf("%d", &nbr);
    while (temp != 0)
    {
        titre_col[4] = num[z];
        z++;
        remlissge_dur_dataframe(lig,titre_col,nbr);
        temp --;
    }

    affiche_dataframe(lig);




    return 0;
}
