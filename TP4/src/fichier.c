#include <stdio.h> // en-têtes(headers)
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "fichier.h"
#include <string.h>

int main() {
    char message[] = "Bonjour";
    char nom_de_fichier[] = "fichier.txt";
    lire_fichier(nom_de_fichier);
    ecrire_dans_fichier( nom_de_fichier, message);
    lire_fichier(nom_de_fichier);
    return(0);
}
    
    
