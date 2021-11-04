#include <stdio.h> // en-têtes(headers)
#include <stdlib.h>
#include <time.h>
#include "liste.h"

//https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/19733-les-listes-chainees

void insertion (struct couleurs *couleur, struct liste_couleurs *liste) {
    struct couleurs *nouvelle_coul = malloc(sizeof(*nouvelle_coul));
    nouvelle_coul -> rouge = couleur -> rouge;
    nouvelle_coul -> vert = couleur -> vert;
    nouvelle_coul -> bleu = couleur -> bleu;
    nouvelle_coul -> alpha = couleur -> alpha;

    nouvelle_coul -> suivant = NULL; //la couleur suivante n'existe pas encore puisqu'on vient de créer la dernière

    if (liste -> premier != NULL) { //si la liste de couleurs n'est pas vide
        struct couleurs *coul_temp = liste -> premier;
        while (coul_temp -> suivant != NULL) {
            coul_temp = coul_temp -> suivant; //on accède à la dernière couleur de la liste
        }
        coul_temp -> suivant = nouvelle_coul; //la dernière couleur de notre liste prend comme couleur suivante la couleur que l'on vient de créer
    }
}
    
void parcours (struct liste_couleurs *liste) {
    struct couleurs *couleur = liste -> premier;

    int i = 1;
    while (couleur != NULL) { //tant qu'on a pas traité la dernière couleur de la liste
        //on affiche chaque caractéristique de chaque couleur, puis on passe à la couleur suivante
        printf("Couleur %d: %02x %02x %02x %02x\n", i, couleur -> rouge, couleur -> vert, couleur -> bleu, couleur -> alpha);
        i++;
        couleur = couleur -> suivant;
    }
}
