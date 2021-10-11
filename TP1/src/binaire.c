#include <stdio.h> // Bibliothèque utilisée

int main() {
    int i;
    int nombre[15];
    int nb = 15; // Nombre qui correspond à la valeur max que peut prendre une variable int
    int nb2 = nb;

    for( i = 0; i < 15; i++ ){
        nombre[i] = nb%2; // division euclidienne par 2
        nb = nb/2;  
    }

    printf("Le nombre en B10 %i est en B2 : ", nb2);

    for( i = 14; i >= 0; i-- ){
        printf("%i",nombre[i]);
    }

    printf("\n");
    return(0);
}
