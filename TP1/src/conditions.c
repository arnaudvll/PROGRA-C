#include <stdio.h> // Bibliotèque utilisée

int main() {
    int nb = 1000;

    // Première condition, notre variable nb doit être divisible par 2 et 15
    while (nb > 0) {
        if ((nb % 2 == 0) && (nb % 15 == 0)) { // && correspond à l'opérateur logique ET
            printf("%d est divisible par 2 et 15\n", nb);
        }
        nb--;
    }

    // Deuxième condition, notre variable nb doit être divisible par 103 ou 107
    nb = 1000;
    while (nb > 0) {
        if ((nb % 103 == 0) || (nb % 107 == 0)) { // || correspond à l'opérateur logique OU
            printf("%d est divisible par 103 ou 107\n", nb);
        }
        nb--;
    }
    
    // Troisième condition, notre variable nb doit être divisible par 7 ou 5 mais pas par 3
    nb = 1000;
    while (nb > 0) {
        if ((nb % 7 == 0) || (nb % 5 == 0)) {
            if (nb % 3 != 0) {
                printf("%d est divisble par 7 ou 5 mais pas par 3\n",nb);
            }
        }
        nb--;
    }
    return 0;
}
// Dans cet exercice nous devions mettre en place des conditions d'opérations sur un nombre initialement défini ( un entier )
// Pour réaliser ces conditions nous devions utiliser des boucles for et while