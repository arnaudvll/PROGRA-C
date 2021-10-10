#include <stdio.h> // bibliothèques utilisées
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Création d'une structure couleur avec chaque paramètre rouge, vert, bleu et alpha
struct Couleurs {
    char rouge; 

    char vert;

    char bleu;

    char alpha;

};

int main() {
    struct Couleurs tableau[10]; // on crée un tableau de 10 couleurs dans la structure Couleurs

    srand(time(NULL)); 

    // Dans cette fonction on crée aléatoirement des valeurs de rouge, vert, bleu et alpha
    // Puis on les ajoute au tableau que l'on a créé précédemment, indice par indice grâce à une boucle for
    for( int i = 0 ; i < 10 ; i++) {
    
        int rouge = rand();
        int vert = rand();
        int bleu = rand();
        int alpha = rand();

        tableau[i].rouge = rouge;
        tableau[i].vert = vert;
        tableau[i].bleu = bleu;
        tableau[i].alpha = alpha;

        // affichage des couleurs
        printf("%02x %02x %02x %02x \n", tableau[i].rouge, tableau[i].vert, tableau[i].bleu, tableau[i].alpha);

    }
    return 0;
}
 
// Dans cet exercice, nous avons créé un tableau de 10 couleurs ( une couleur = 4 données ) appartenant à une structure où nous avons 
// 10 couleurs qui ont été créé aléatoirement ( chaque parametre rouge, vert... possède des valeurs aléatoires )
