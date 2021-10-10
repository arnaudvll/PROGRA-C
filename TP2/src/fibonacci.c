#include <stdio.h> // Bibliothèque utilisée

int main() {

    // On définit le nombre de termes que l'on veut afficher
    int n = 10;
    
    // On définit les premiers termes de la suite 
    int u0 = 1;
    int u1 = 1;

    int rep = n-1; // le nombre de répétitions que l'on va effectuer pour calculer les termes de la suite

    // On réalise une boucle while pour calculer chaque terme de la suite. On va donc ici de u2 à u10
    while (rep > 0) {
        int un = u0 +u1; // création du terme suivant (à la première itération u2 et ainsi de suite)
        u0 = u1; // u0 prend le terme suivant, u1
        u1 = un; // u1 prend le terme suivant, un (u2 à la première itération)
        rep--; // on diminue la valeur de rep jusqu'a arriver à 0 et finir la boucle 
        printf("u%d = %d\n", n-rep, un);
    }
    return 0;
}

// Dans cet exercice, nous devions réaliser et afficher tout les termes de la suite de fibonacci. Pour cela, nous avons réalisé 
// une boucle while qui calcule chaque terme de u2 à un
