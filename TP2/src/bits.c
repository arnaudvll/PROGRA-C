#include <stdio.h> // Bibliotèque utilisée

int main() {
    int d =      0b00010000001100000001000000100000; // création d'une variable en binaire qui correespond à 20
    int masque = 0b00010000000000000001000000000000; // création de notre masque à 4
    int bits = d & masque; // création de notre variable bits qui doit respecter les 2 variables précédentes

    // Affiche 1 si la condition de l'ennoncé est respecté 
    if (bits == masque) {
        printf("%d\n", 1);
    }
    // Affiche 0 dans le cas contraire
    else{
        printf("%d\n", 0);
    }
    return 0;
}

// Dans cet exercice, nous devions considérez un entier d et concevoir un code qui vérifie si les 4eme et 20eme bits de gauche sont 1 (en binaire). Si
// les deux bits sont 1, il affiche 1 sinon 0. Pour cela, nous avions utilisé un masque 
