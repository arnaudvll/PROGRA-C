#include <stdio.h> // Bibliotèques utilisées
#include <string.h>

int main() {
    // initialisation d'une structures avec différentes variables de nature différentes
    struct etudiant{
        char prenom;
        char nom;
        char rue;
        char ville;
        short notes_c; // short pour les chiffres
        short notes_sys;
    };

    // création de 5 structures ( 1 pour chaque étudiant )
    struct etudiant arnaud;
    strcpy(arnaud.prenom, "Arnaud"); //strcpy permet de copier les chaînes de caractère 
    strcpy(arnaud.nom, "A1");
    strcpy(arnaud.rue, "1");
    strcpy(arnaud.ville, "lyon");
    arnaud.notes_c = 20;
    arnaud.notes_sys = 20;
    
    struct etudiant bob;
    strcpy(bob.prenom, "bob");
    strcpy(bob.nom, "A2");
    strcpy(bob.rue, "2");
    strcpy(bob.ville, "lyon");
    bob.notes_c = 18;
    bob.notes_sys = 2;
    
    struct etudiant charles;
    strcpy(charles.prenom, "charles");
    strcpy(charles.nom, "A3");
    strcpy(charles.rue, "3");
    strcpy(charles.ville, "lyon");
    charles.notes_c = 15;
    charles.notes_sys = 8;
    
    struct etudiant denis;
    strcpy(denis.prenom, "denis");
    strcpy(denis.nom, "A4");
    strcpy(denis.rue, "4");
    strcpy(denis.ville, "lyon");
    denis.notes_c = 10;
    denis.notes_sys = 17;
    
    struct etudiant esteban;
    strcpy(esteban.prenom, "esteban");
    strcpy(esteban.nom, "A5");
    strcpy(esteban.rue, "5");
    strcpy(esteban.ville, "lyon");
    esteban.notes_c = 6;
    esteban.notes_sys = 20;
    
    // affichage des différentes informations pour chaque étudiant 
    printf("étudiant: %s, %s\n adresse: %s %s\n note en programmation en c: %hd: \n note en système d'exploitation: %hd\n", arnaud.nom, arnaud.prenom, arnaud.rue, arnaud.ville, arnaud.notes_c, arnaud.notes_sys);
    printf("étudiant: %s, %s\n adresse: %s %s\n note en programmation en c: %hd: \n note en système d'exploitation: %hd\n", bob.nom, bob.prenom, bob.rue, bob.ville, bob.notes_c, bob.notes_sys);
    printf("étudiant: %s, %s\n adresse: %s %s\n note en programmation en c: %hd: \n note en système d'exploitation: %hd\n", charles.nom, charles.prenom, charles.rue, charles.ville, charles.notes_c, charles.notes_sys);
    printf("étudiant: %s, %s\n adresse: %s %s\n note en programmation en c: %hd: \n note en système d'exploitation: %hd\n", denis.nom, denis.prenom, denis.rue, denis.ville, denis.notes_c, denis.notes_sys);
    printf("étudiant: %s, %s\n adresse: %s %s\n note en programmation en c: %hd: \n note en système d'exploitation: %hd\n", esteban.nom, esteban.prenom, esteban.rue, esteban.ville, esteban.notes_c, esteban.notes_sys);
    
    return 0;  
}
    
// Dans cet execrice nous devions faire la même chose que dans le précédent mais en utilisant les structures.
// NOus avons donc créer 6 structures, 1 pour chaque étudiant et 1 pour chaque variables