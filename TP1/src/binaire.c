#include <stdio.h> // Bibliotèque utilisée

int main(){
    int i;
    int k;
    int nombre[15];
    int nb = 32763; // Nombre qui correspond à la valeur max que peut prendre une variable int

    for( i = 0; i < 15; i++ ){
        nombre[i] = nb%2; // division euclienne par 2
        nb = nb/2;  
    }

    printf("Le nombre en B10 %i est en B2 : ",nb);

    for( k = 14; k >= 0; k-- ){
        printf("%i",nombre[k]);
    }
    return(0);
}