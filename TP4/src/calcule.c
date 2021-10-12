#include <stdio.h> // Bibliothèque utilisée
#include <stdlib.h>
#include "operator.h"

//https://stackoverflow.com/questions/7898215/how-to-clear-input-buffer-in-c a mettre en SOURCE

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

int somme(int num1, int num2) {
    printf("addition %d\n",num1+num2);
    return 0;
};

int difference(int num1, int num2) {
    printf("soustraction %d\n",num1-num2);
    //return 0;
};

int produit(int num1, int num2) {
    printf("multiplication %d\n",num1*num2);
    return 0;
};

int quotient(int num1, int num2) {
    printf("division entière %d\n",num1/num2);
    return 0;
};

int modulo(int num1, int num2) {
    printf("reste de la division euclidienne %d\n",num1%num2);
    return 0;
};

int et(int num1, int num2) {
    printf("a et b %d\n",num1 && num2);
    return 0;
};

int ou(int num1, int num2) {
    printf("a ou b %d\n",num1 || num2);
    return 0;
};

int negation(int num1) {
    printf("non a %d\n",!num1);
    return 0;
};
