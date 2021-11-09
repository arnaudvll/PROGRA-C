#include <sys/types.h> //Bibliothèques utilisées
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include "repertoire.h"

int lire_dossier(char *dossier) {    
    DIR *dirp = opendir(dossier);
    
    if (dirp == NULL) {
        perror("opendir");
        return(EXIT_FAILURE);
    }
    
    struct dirent * ent;
    while(1) {
        ent = readdir(dirp);
        if (ent == NULL) {
            break;
        }
        printf("%s\n", ent->d_name);
    }
    
    closedir(dirp);
    return 0;
}

int lire_dossier_recursif(char *dossier) {          
    DIR *dirp = opendir(dossier);
    
    if (dirp == NULL) {
        perror("opendir");
        return(EXIT_FAILURE);
    }
    
    struct dirent * ent;
    while(1) {
        ent = readdir(dirp);
        
        if (ent == NULL) {
            break;
        }
        
        if (strcmp(ent->d_name, "..") == 0) {
            continue;
        }
        
        if (strcmp(ent->d_name, ".") == 0) {
            continue;
        }
        
        if (ent->d_type == DT_DIR) { //si on est sur un dossier
            printf("Dossier %s\n", ent->d_name); 
            char copie[256] = ""; //on crée une chaine de caractères de taille importante pour accueillir l'adresse complète
            
            //on copie l'adresse complète dans la chaîne copie
            strcpy(copie, dossier);
            strcat(copie, "/");
            strcat(copie, ent->d_name);
            
            lire_dossier_recursif(copie); //on relance la fonction avec le dossier pointé
        }
        
        printf("%s\n", ent->d_name);
    }
    
    closedir(dirp);
    return 0;
}
    
int lire_dossier_iteratif(char *dossier) {
    int compteur = 1; //compteur qui sera nul lorsque tous les fichiers et dossiers auront été traités
    DIR *dirp = opendir(dossier);
        
    if (dirp == NULL) {
        perror("opendir");
        return(EXIT_FAILURE);
    }
    struct dirent * ent;
    ent = readdir(dirp);
    char adresse_dir [256][256]; //ce tableau de tableau de char va accueillir les adresses des dossier 'à traiter'
    int ptr_liste = 0; //compteur qui sert d'indice pour les adresses à traiter à rajouter
    char copie[256] = ""; //on crée une chaine de caractères de taille importante pour accueillir l'adresse complète
    
    closedir(dirp);
    int cpt2 = 0; //compteur qui sert d'indice pour traiter une à une les adresses de dossier restantes
    
    while(compteur != 0) {
        DIR *dirp = opendir(dossier);

            while(1) {
            ent = readdir(dirp);
            
            
            if (ent == NULL) { //dès qu'on a lu tout un dossier, on quite la boucle et on recommence avec un nouveau dossier
                compteur--;
                break;
            }
            
            if (strcmp(ent->d_name, "..") == 0) {
                continue;
            }
            
            if (strcmp(ent->d_name, ".") == 0) {
                continue;
            }
            
            if (ent->d_type == DT_DIR) { //si on est sur un dossier
                printf("Dossier %s\n", ent->d_name); 
                //on copie l'adresse complète dans la chaîne copie
                strcpy(copie, dossier);
                strcat(copie, "/");
                strcat(copie, ent->d_name);
                strcpy(adresse_dir[ptr_liste], copie); //on rajoute en dernière position de la liste d'adresses 'à traiter' l'adresse du dossier pointé 
                ptr_liste++;
                compteur++;
            }
            else {
                printf("%s\n", ent->d_name);
            }
            }
    
        closedir(dirp);
        strcpy(dossier, adresse_dir[cpt2]); //on remplace le dossier actuel par la première adresse trouvée dans la liste d'adresses à traiter, puis on recommence
        cpt2++; 
    }
    return 0;
}
