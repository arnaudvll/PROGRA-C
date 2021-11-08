#include <stdio.h> // en-têtes(headers)
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "etudiant_bd.h"

int main() {
    //introduction des différentes variables que l'on va demander
    char nom_de_fichier[] = "etudiant.txt";
    char nom[20];
    char prenom[20];
    char adresse[40];
    char ville[20];
    char note_c[3];
    char note_sys[3];
    
    //on récolte les informations entrées par l'utilisateur dans une boucle for (pour 5 étudiants)
    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d ", i);
        printf("Nom: ");
        scanf("%s", nom);
        clear();
        
        printf("Prenom: ");
        scanf("%s", prenom);
        clear();
        
        printf("adresse: ");
        scanf("%s", adresse);
        clear();
        
        printf("ville: ");
        scanf("%s", ville);
        clear();
        
        printf("note_c: ");
        scanf("%s", note_c);
        clear();
        
        printf("note_sys: ");
        scanf("%s", note_sys);
        clear();
        
        //on écrit dans le fichier chaque information
        ecrire_dans_fichier(nom_de_fichier, nom);
        ecrire_dans_fichier(nom_de_fichier, ", ");
        ecrire_dans_fichier(nom_de_fichier, prenom);
        ecrire_dans_fichier(nom_de_fichier, ", ");
        ecrire_dans_fichier(nom_de_fichier, adresse);
        ecrire_dans_fichier(nom_de_fichier, ", ");
        ecrire_dans_fichier(nom_de_fichier, ville);
        ecrire_dans_fichier(nom_de_fichier, ", ");
        ecrire_dans_fichier(nom_de_fichier, note_c);
        ecrire_dans_fichier(nom_de_fichier, ", ");
        ecrire_dans_fichier(nom_de_fichier, note_sys);
        ecrire_dans_fichier(nom_de_fichier, "\n");
        
    }
    return(0);
}
