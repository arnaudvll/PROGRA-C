#include <stdio.h> // bibliotèques utilisées
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Création d'une structure pour chaque variables
struct Couleurs {
    __u_char rouge; //__u_ pour protéger les variables

    __u_char vert;

    __u_char bleu;

    __u_char alpha;

};

int main() {
    struct Couleurs tableau[10];

    srand(time(NULL)); // générateur de nombre aléatoire basé sur le temps, créer des nombres aléatoires 
    // sur des bases de temps différentes

    // Dans cette fonction on rempli aléatoirement les variables rouge,vert,bleur et alpha
    // Puis on les ajoute au tableau que l'on a créé précédemment
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
 
// Dans cet exercice, nous avons créé un tableau de couleur ( couleur = 4 données ) où nous aons 10 couleurs 
// qui ont été créé aléatoirement ( chaque parametre rouge, vert... possède des valeurs aléatoires )