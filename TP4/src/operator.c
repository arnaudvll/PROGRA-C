#include <stdio.h> // Bibliothèque utilisée
#include "operator.h"

//on réutilise les mêmes codes que pour operators2, en mettant sous forme de fonctions
int somme(int num1, int num2) {
    printf("addition %d\n",num1+num2);
    return 0;
};

int difference(int num1, int num2) {
    printf("soustraction %d\n",num1-num2);
    return 0;
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

