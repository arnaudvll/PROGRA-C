#include <stdio.h> // Bibliothèque utilisée

int main() {
    int compter =  20;
    int ligne = 1;
    while(ligne < compter+1) {
        int colonne = 2; // on initialise colonne à 2 car on aura toujours un "#" à partir de la 2eme colonne

        // cas pour la première ligne
        if(ligne == 1) {
            printf("*\n");
        }
        
        // cas pour la deuxième ligne
        else if(ligne == 2) {
            printf("**\n");
        }
        
        // cas pour la dernière ligne
        else if(ligne == compter) {
            while(compter > 0) {
                printf("*");
                compter--;
            }   
        }

        // dans les autres cas
        else {
            printf("*"); // on affiche un "*" en début de ligne
            // On se penche sur les # qui se trouvent entre 2 colonnes de *
            while(colonne < ligne) {
                printf("#");
                colonne++;
            }
            printf("*\n"); // on affiche en fin de ligne un "*"
        }   
        ligne++;
    }
    printf("\n");
    return 0;
}
// Même principe que précédemment mais avec l'utilisation de boucle while
