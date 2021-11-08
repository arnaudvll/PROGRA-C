#include <stdio.h> // en-têtes(headers)
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "etudiant_bd.h"


int ecrire_dans_fichier(char *nom_de_fichier, char *message) {
    int fd, count, size;
    fd = open (nom_de_fichier, O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR); //ouverture du fichier
    size = write(fd, message, strlen(message)); //écriture dans le fichier
    close(fd); //fermeture du fichier
    return 0;
}

void clear(void) { //fonction qui permet, lorsqu'elle est exécutée, de stopper l'éxécution tant qu'un retour à la ligne n'a pas été entré par l'utilisateur
    while (getchar() != '\n');
}
