#include <stdio.h> // en-têtes(headers)
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "fichier.h"


int lire_fichier(char *nom_de_fichier) {
    char content;
    int fd, count, size;
    fd = open (nom_de_fichier, O_RDONLY); //ouverture du fichier
    
    //récupération de la taille du fichier
    while (1) {
        size = read(fd, &content, 1);
        if (size < 1) {
            break;
        }
        
    printf("%c", content); //affichage du contenu du fichier
    }
    close(fd); //fermeture du fichier
    printf("\n");
    
    
    return 0;
};

int ecrire_dans_fichier(char *nom_de_fichier, char *message) {
    int fd, count, size;
    fd = open (nom_de_fichier, O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR); //ouverture du fichier
    size = write(fd, message, strlen(message)); //écriture dans le fichier
    close(fd); //fermeture du fichier
    return 0;
};
    

