#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "repertoire.h"

int main(int argc, char **argv) {
    char *dossier = argv[1];
    lire_dossier_iteratif(argv[1]);
    return(0);
}
