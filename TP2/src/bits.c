#include <stdio.h> // Bibliothèque utilisée

int main() {
    int d =      0b00010000001100000001000000100000; // création de l'entier à tester 
    int masque = 0b00010000000000000001000000000000; // création du masque qui va nous permettre de tester chaque bits de l'entier
    int bits = d & masque; // création de la variable bits qui est un ET logique entre l'entier et le masque: si bits et le masque sont égaux, la condition est vérifiée

    // Affiche 1 si la condition de l'enoncé est respectée
    if (bits == masque) {
        printf("%d\n", 1);
    }
    // Affiche 0 dans le cas contraire
    else{
        printf("%d\n", 0);
    }
    return 0;
}

// Dans cet exercice, nous devions considérez un entier  et concevoir un code qui vérifie si les 4eme et 20eme bits de gauche de cet entier sont 1 (en binaire). Si
// les deux bits sont 1, il affiche 1 sinon 0. Pour cela, nous avons utilisé un masque dont les 4eme et 20eme bits sont à 1 et le reste à 0. En effectuant un ET logique
// entre l'entier et le masque, on obtient à nouveau le masque si les 4eme et 20eme bits de gauche de cet entier sont à 1.
