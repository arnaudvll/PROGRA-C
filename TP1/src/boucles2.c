#include <stdio.h> // Bibliotèque utilisée

int main() {
    int compter =  20;
    int ligne = 1;
    while(ligne < compter+1) {
        int colonne = 2; // initialise colonne à 2

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

        // les autres cas
        else {
            printf("*");
            // On se penche sur les # qui se trouve entre 2 colonnes de *
            while(colonne < ligne) {
                printf("#");
                colonne++;
            }
            printf("*\n");
        }   
        ligne++;
    }
    printf("\n");
    return 0;
}
// Même principe que précédemment mais avec l'utilisation de boucle while