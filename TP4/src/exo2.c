#include <stdio.h> // en-têtes(headers)
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "fichier.h"

int main() {
    char message[] = "Bonjour";
    char nom_de_fichier[] = "fichier.txt";
    lire_fichier(nom_de_fichier); //on ouvre et affiche le contenu du fichier
    ecrire_dans_fichier(nom_de_fichier, message); //on écrit le message dans le fichier texte
    lire_fichier(nom_de_fichier); //on re-ouvre et affiche le contenu du fichier après modification
    return(0);
}
