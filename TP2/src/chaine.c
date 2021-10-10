#include <stdio.h> // Bibliotèque utilisée

// Question 1
int main() {
    char c[] = "bonjoursalut"; // création d'une variable en chaine de caractère donc on utilise char sous forme de liste
    int i;
    for (i = 0; c[i] != 0; i++) {} // boucle qui permet de calculer le nombre de caractère dans la chaine de caractère
    printf("nombre de caractères dans la chaine: %d\n", i); // affichage du nbr

// Question 2    
    char c2[100]; // chaine de caractèree avec max 100 caractères
    int n;

    // boucle qui permet de recopier dans une liste vide (c2), tout les caractères de la chaine de caractère dans cs
    for (n = 0; n <= i; n++) {
        c2[n] = c[n];
    }
    c2[n+1] = 0; // n fixe le dernier terme+1 à O
    printf("chaine copiée: %s\n", c2);

// Question 3
    int j;
    for (j = 0; c2[j] != 0; j++) {}
    
    // Concaténation de la première chaine de caractère
    char c3[100];
    for (n = 0; n <= i ; n++) {
        c3[n] = c[n];
    }
    
    // Concaténation de la deuxième chaine de caractère
    for (n=0; n <= j; n++) {
        c3[n+i] = c2[n];
    }
        
    printf("chaines concaténées: %s\n", c3);
    return 0;
}

//  Dans cet exercice nous devions répondre à trois sous question. Nous devions dans un premier temps calculer
// le nombre de terme d'une chaine de caractère (avec un boucle for et en créant des chaines de caractère sous 
// forme de liste).
// Dans un deuxième temps, nous devions recopier une chaine de caractère ( création d'une autre variable sous 
// sous forme de liste qui recopie avec l'aide d'une boucle for chaque caractère de la chaine créer à la question
// 1). Enfin nous devions concaténer 2 chaines de caractères. Pour cela, nous avons créer une 3 e variable et 
// 2 boucles for ( 1 pour chaque chaine de caractères)


