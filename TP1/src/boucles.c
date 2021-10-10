#include <stdio.h> // Bibliotèque utilisée

int main() {
    int compter =  100;
    int ligne;
    int colonne;
    for(ligne = 1; ligne < compter+1; ligne++) {
        if(ligne == 1) {
            printf("*\n"); // On s'occupe de la première ligne ici donc on affiche 1 "*" puis on va à la ligne suivante
        }
        
        else if(ligne == 2) {
            printf("**\n"); // On s'occupe de la deuxième ligne ici donc on affiche 2 "*" puis on va à la ligne suivante
        }
        
        else if(ligne == compter) {
            for(; compter > 0; compter--){ // On s'occupe de la dernière ligne ici donc on affiche "compter-1" "*" puis on va à la ligne suivante
                printf("*");
            }   
        }
        else {
            printf("*");
            for(colonne = 2; colonne < ligne; colonne++) {
                printf("#"); // On affiche des "#" pour toutes les autres lignes et on affiche des "*" aux extrémités
            }
            printf("*\n");
        }    
    }
    printf("\n");
    return 0;
}
// Dans cet execrice, nous Écrivez un programme *boucles.c* qui utilise `for`, # et * et qui affiche un triangle rectangle. 
// La taille du triangle est dependent de la valeur de la variable `compter` 
