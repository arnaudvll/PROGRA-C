#include <stdio.h> // Bibliothèque utilisée
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "chercherfichier.h"

//source https://koor.fr/C/cstring/strtok.wp

int main(){
    char * tab[100];
    char* tab2[100]; // on crée un deuxième tableau de taille 100 qu'on utilisera pour mettre uniquement les phrases de même taille que la phrase à tester
    char nom_de_fichier[] = "fichier.txt";
    char content[] = lire_fichier(nom_de_fichier);
    int taille_txt = strlen(content);
    int taille_test; // taille de la phrase à tester (qu'on définira plus tard)
    int taille_phrase; // taille de la phrase dans le tableau d'origine
    int a = 0;
    int b = 0;

    // initalisation de la phrase à tester
    char* test = "Bonjour"; 

    for (taille_test = 0; test[taille_test]; taille_test++); // calcul de la taille de la phrase à tester
    
    char * strToken = strtok(content, ' ');
    int i = 0;
    
    while (strToken != NULL) {
        tab[i] = strToken;
        strToken = strtok(NULL, ' ');
        i++;
    }

    for (int i = 0; i < taille_txt; i++) { // on parcourt chaque phrase dans le tableau
        for (taille_phrase = 0; tab[i][taille_phrase] ; taille_phrase++); // on calcule les tailles de chaque phrase dans le tableau
        if (taille_phrase == taille_test) { // pour chaque phrase dans le tableau, si elle a la même taille que la phrase à tester
            tab2[a] = tab[i]; // on remplit le 2ème tableau avec les phrases de même taille
            a++;
            continue;
        }
    }
    // on récupère dans la variable a le nombre de phrases dans tab2
    
    for (int i = 0; i < a; i++) { // indice pour parcourir tab2
        for (int j = 0; j < taille_test; j++) { // indice pour parcourir la phrase à tester
            if (tab2[i][j] == test[j]) { // on regarde, caractère par caractère, si les phrases sont égales 
                if (j == taille_test-1) { // si on a testé le dernier caractère des 2 phrases à comparer et qu'ils sont égaux, alors la phrase à tester est dans le tableau
                    printf("La phrase testée est dans le tableau\n");
                    b++;
                }
            }
        }
    }


    return 0;
}

char lire_fichier(char *nom_de_fichier) {
    char content;
    int fd, count, size;
    fd = open (nom_de_fichier, O_RDONLY); //ouverture du fichier
    
    //récupération de la taille du fichier
    while (1) {
        size = read(fd, &content, 1);
        if (size < 1) {
            break;
        }
        
    }
    close(fd); //fermeture du fichier
    
    
    return &content;
};
