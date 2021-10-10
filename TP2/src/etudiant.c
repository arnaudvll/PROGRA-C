#include <stdio.h> // Bibliothèque utilisée

int main() {

    char nom[][3] = {"A1", "A2", "A3", "A4", "A5"}; // création du tableau des noms (de taille 3 maximum)
    char prenom[][15] = {"Arnaud", "Bob", "Charles", "Denis", "Esteban"}; // création du tableau des prénoms (de taille 15 maximum)
    char adresse[][15] = {"1 rue a", "2 rue b", "3 rue c", "4 rue d", "5 rue e"}; // création du tableau des adresses (de taille 15 maximum))
    char notes_progc[][3] = {"20", "14", "16", "2", "18"}; // création du tableau des notes de programmation en c (de taille 3 maximum)
    char notes_syst[][3] = {"20", "6", "17", "8", "12"}; //création du tableau des notes de système d'exploitation (de taille 3 maximum)

    int i;
    // Affichage  des données de chaque étudiant, utilisation d'une boucle for, chaque i correspond à 1 étudiant
    for (i = 0; i < 5; i++) {  
        printf("étudiant %d: %s, %s\n adresse: %s\n note en programmation en c: %s \n note en système d'exploitation: %s\n", i+1, nom[i], prenom[i], adresse[i], notes_progc[i], notes_syst[i]);
    }
    return 0;
}
