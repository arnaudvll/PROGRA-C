#include <stdio.h> // en-têtes(headers)
#include <stdlib.h>
#include <time.h>
#include "liste.h"

int main() {
    srand(time(NULL));
    struct liste_couleurs *liste = malloc(sizeof(*liste));
    struct couleurs *couleur_ini = malloc(sizeof(*couleur_ini));

    int rouge = rand(); //on assigne des numéros aléatoires pour chaque couleur
    int vert = rand();
    int bleu = rand();
    int alpha = rand();

    //initialisation de la première couleur de la liste
    couleur_ini -> rouge = rouge;
    couleur_ini -> vert = vert;
    couleur_ini -> bleu = bleu;
    couleur_ini -> alpha = alpha;
    couleur_ini -> suivant = NULL;
    liste -> premier = couleur_ini;
    free(couleur_ini);

    for (int i = 0; i < 9; i++){ //création des 9 autres couleurs de la liste
        struct couleurs *couleur = malloc(sizeof(*couleur));
        int rouge = rand(); 
        int vert = rand();
        int bleu = rand();
        int alpha = rand();

        couleur -> rouge = rouge;
        couleur -> vert = vert;
        couleur -> bleu = bleu;
        couleur -> alpha = alpha;
        couleur -> suivant = NULL;
        insertion(couleur, liste);
        free(couleur);
    }
    parcours(liste);
    free(liste);
}
