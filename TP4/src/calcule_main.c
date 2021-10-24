#include <stdio.h> // Bibliothèque utilisée
#include <stdlib.h>
#include "operator.h"

int main(int argc, char* argv[]) { 
    //le premier terme de argv correspond à l'éxécution de la fonction dans le terminal
    char op = argv[1][0]; //on récupère le deuxième argument, soit l'opérateur (argv[1] = "opérateur \0" donc on prend argv[1][0]
    int num1 = atoi(argv[2]); //on récupère le troisième argument, soit le 1er nombre
    int num2 = atoi(argv[3]); //on récupère le quatrième argument, soit le 1er nombre
    
    //le code suivant est comme dans les fichiers 'opérateur' précédents
    switch (op) {
        case '+' : 
            somme(num1, num2);
            break;

        case '-' : 
            difference(num1, num2);
            break;
            
        case '*' :
            produit(num1, num2);
            break;
            
        case '/' :
            quotient(num1, num2);
            break;
            
        case '%' :
            modulo(num1, num2);
            break;
            
        case '&' :
            et(num1, num2);
            break;
            
        case '|' :
            ou(num1, num2);
            break;
            
        case '~':
            negation(num1);
            break;
    }
    return 0;
}
