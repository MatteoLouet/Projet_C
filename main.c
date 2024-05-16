//
// Created by anthi on 21/04/2024.
//

#include "column.c"
#include <stdlib.h>
#include <stdio.h>

int main() {

    COLUMN *mycol = create_column("My column");
    insert_value(mycol, 5);
    insert_value(mycol, 10);
    insert_value(mycol, 15);
    print_col(mycol);
    nbr_occu(mycol, 10);
    position(mycol, 1);
    nbr_sup(mycol, 5);
    nbr_inf(mycol, 10);
    delete_column(mycol);


    return 0;
}
