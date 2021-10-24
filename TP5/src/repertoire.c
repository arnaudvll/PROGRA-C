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
}
    
int lire_dossier_iteratif(char *dossier) {
    printf("ok");
    int compteur = 1;
    DIR *dirp = opendir(dossier);
        
    if (dirp == NULL) {
        perror("opendir");
        return(EXIT_FAILURE);
    }
    printf("ok");
    struct dirent * ent;
    ent = readdir(dirp);
    char adresse_dir [256][256];
    int ptr_liste = 1;
    char copie[256] = ""; //on crée une chaine de caractères de taille importante pour accueillir l'adresse complète
    //on copie l'adresse complète dans la chaîne copie
    strcpy(copie, dossier);
    strcat(copie, "/");
    strcat(copie, ent->d_name); 
    strcpy(adresse_dir[0], copie);
    closedir(dirp);
    int cpt2 = 0;
    
    while(compteur != 0) {
        printf("ok");
        DIR *dirp = opendir(dossier);
        printf("ok");

            while(1) {
            ent = readdir(dirp);
            
            
            if (ent == NULL) {
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
                strcpy(adresse_dir[ptr_liste], copie);
                ptr_liste++;
                compteur++;
            }
            
            printf("%s\n", ent->d_name);
            }
    
        closedir(dirp);
        strcpy(dossier, adresse_dir[cpt2]);
        cpt2++; 
    }
}
    
    
    
    
    
    
    
    
    