#include <stdio.h> // Bibliotèque utilisée

int main() {

    // On définit les premiers termes de la suite 
    int n = 10;
    int u0 = 1;
    int u1 = 1;
    int rep = n-1;

    // On réalise une boucle while pour calculer chaque terme de la suite. On va donc de u9 à u0
    while (rep > 0) {
        int un = u0 +u1; // initialisation du terme u9 à u0
        u0 = u1; // u0 prend le terme suivant, u1
        u1 = un; // u1 prend le terme suivant, un
        rep--; // on diminue la valeur de rep jusqu'a arriver à 0 et finir la boucle 
        printf("u%d = %d\n", n-rep, un);
    }
    return 0;
}

// Dans cet exercice, nous devions réaliser et afficher tout les termes de la suite de fibonacci. Pour cela, nous avons réalisé 
// une boucle while qui calcul chaque termen de u9 à u0
