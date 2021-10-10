#include <stdio.h> // Bibliotèque utilisée

int main() {
    int a = 5;
    int b = 2;

    // on réalise une boucle while pour faire le produit de a*a. Le nombre de produit réalisé ( valeur de b ), correspond à la puissance
    // à laquelle est élevée a
    while (b > 1) {
        a*=a;
        b--;
    }
    printf("%d\n", a);
    return 0;
}
 // Dans cet exercice nous devions  réaliser un codee qui permet dee calculer la puissance d'un nombre. Pour cela, nous avons utilisé 
 // une boucle while puisque a^3 = a*a*a