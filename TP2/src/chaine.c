#include <stdio.h> // Bibliothèque utilisée

// Question 1
int main() {
    char c[] = "bonjoursalut"; // création d'une chaine de caractère donc un tableau de char
    int i;
    for (i = 0; c[i] != 0; i++) {} // boucle qui permet de calculer le nombre de caractère dans la chaine de caractère: on parcourt 
    // chaque caractère avec un compteur et on s'arrete lorsque l'on rencontre un 0, soit à la fin de la chaine de caractères

    printf("nombre de caractères dans la chaine: %d\n", i); // affichage du nombre de caractères

// Question 2    
    char c2[100]; // on crée une chaine de caractère avec au maximum 100 caractères
    int n;

    // boucle qui parcourt la chaine originale et copie chaque caractère dans la nouvelle chaine de caractère
    for (n = 0; n <= i; n++) {
        c2[n] = c[n];
    }

    c2[n+1] = 0; // on fixe le terme après le dernier à O
    printf("chaine copiée: %s\n", c2); // on affiche la chaine copiée

// Question 3
    int j;
    for (j = 0; c2[j] != 0; j++) {} // on affecte à j la taille de la deuxième chaine (dans ce cas égale à la première)
    
    
    char c3[100]; // on initialise la chaine qui sera la concaténation des deux autres
    for (n = 0; n <= i ; n++) { // on copie la première chaine dans la troisième
        c3[n] = c[n];
    }
    
    for (n=0; n <= j; n++) { // on copie la deuxieme chaine dans la troisième en commencant par l'indice i, soit après la chaine qui vient d'être copiée
        c3[n+i] = c2[n];
    }
        
    printf("chaines concaténées: %s\n", c3); // on affiche la concaténation
    return 0;
}

//  Dans cet exercice nous devions répondre à trois sous question. Nous devions dans un premier temps calculer
// le nombre de termes d'une chaine de caractère (grâce à une boucle for).
// Dans un deuxième temps, nous devions recopier une chaine de caractère (encore grâce à une boucle for).
// Enfin nous devions concaténer 2 chaines de caractères. Pour cela, nous avons crée une 3eme chaine et recopié successivement 
// la premiere et la deuxieme dedans
