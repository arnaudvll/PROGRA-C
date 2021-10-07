#include <stdio.h>

#define N 100 //on définit la taille du tableau

int main() {    
    int tableau[N]; //création du tableau de taille 100
    int i;
    for(i = 0; i < N; i++) {
        tableau[i] = i; // on remplit le tableau avec des valeurs allant de 0 à 99
    }
    int grand = 0; //plus petit entier possible posiitf
    int petit = 32767; //plus grand entier possible
    for(i = 0; i < N; i++) { //on teste pour chaque valeur du tableau si elle est plus grande ou plus petite que les valeurs définies précédemment
        if(tableau[i] > grand) { //si la valeur testée est plus grande que la plus grande valeur précédente
            grand = tableau[i]; //on remplace cette dernière par la nouvelle plus grande valeur, jusqu'à trouver la plus grande du tableau
        }
        if(tableau[i] < petit) { //si la valeur testée est plus petite que la plus petite valeur précédente
            petit = tableau[i]; //on remplace cette dernière par la nouvelle plus petite valeur, jusqu'à trouver la plus petite du tableau
        }
    }
    //on affiche les deux valeurs limites trouvées
    printf("plus grand entier du tableau: %d\n", grand); 
    printf("plus petit entier du tableau: %d\n", petit);
    
    return(0);
}
