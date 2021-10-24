#include <stdio.h> // Bibliothèque utilisée
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "chercher.h"

char *lire_fichier(char *nom_de_fichier) {
    char *content_1 = NULL;
    content_1 = malloc(sizeof(char) + 1); //création de la variable qui va lire caractère par caractère le fichier texte
    char *content_50 = NULL;
    content_50 = malloc(50 * sizeof(char) + 1); //création de la variable qui va prendre le texte entier
    int fd, count, size;
    int a = 0;
    fd = open (nom_de_fichier, O_RDONLY); //ouverture du fichier
    
    while (1) {
        size = read(fd, content_1, 1); //on récupère les caractères du fichier texte un à un
        
        if (size < 1) { //si on ne récupère plus de caractère, on quitte la boucle
            break;
        }
        content_50[a] = *content_1; //on remplit le texte entier dans la variable contenu
        a++;
    }
    
    close(fd); //fermeture du fichier
    free(content_1);
    
    return content_50;
};
