#include <stdio.h> // Bibliothèque utilisée
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "chercher.h"

int main(int argc, char *argv[]){
    char nom_de_fichier[] = "fichier.txt";
    char *content = NULL;
    content = lire_fichier(nom_de_fichier); //on récupère le contenu du fichier texte
    int taille_txt = strlen(content); //on récupère sa taille
    int taille_test; // taille de la phrase à tester (qu'on définira plus tard)

    // récupération de la phrase à tester
    char *test = NULL;
    test = malloc(50 * sizeof(char));
    strcpy(test,argv[1]);
    for (int i = 2; i < argc; i++) {
        strcat(test , " ");
        strcat(test, argv[i]);
    }
    
    taille_test = strlen(test); //récupération de la taille de la phrase à tester
    
    int ligne = 1;
    int rep = 0;
    for (int i = 0; i < taille_txt; i++) { // indice pour parcourir chaque caractère du texte
        if (content[i] == test[0]) { //si un caractère du texte est le même que le premier de la phrase à tester
            int j = 1;
            while (j < taille_test) { //on teste la concordance avec tous les caractères suivant ce caractère
                if (content[i + j] == test[j]) {
                    if (j == taille_test - 1) { //si on est arrivé au bout de la phrase à tester et que tous les caractères sont les mêmes
                        rep++;
                    }
                }
                else {
                    break;
                }
                j++;
            }
        }
        else if ((content[i] == '\n') || (content[i + 1] == '\0')) { //si on atteint un bout de ligne ou la fin du texte
            if (rep != 0) {
                printf("Ligne %d, %d fois\n", ligne, rep); //on affiche le nombre de répétitions de la phrase et sa ligne
                rep = 0; //on réinitialise le nombre de répétitions
            }
            ligne++; //on 'passe' à la ligne suivante
        }
    }
    free(content);
    free(test);
    return 0;
}
