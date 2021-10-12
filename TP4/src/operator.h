#include <stdio.h> // Bibliotèque utilisée

int somme(int num1, int num2){
    int y = num1 + num2;
    printf("addition %d\n",y);
    return 0;
}

int soustraction(int num1, int num2){
    int y = num1 - num2;
    printf("soustraction %d\n",y);
    return 0;
}

int multiplication(int num1, int num2){
    int y = num1 * num2;
    printf("multiplication %d\n",y);
    return 0;
}

int division_entiere(int num1, int num2){
    int y = num1 / num2;
    printf("division entière %d\n",y);
    return 0;
}


int modulo(int num1, int num2){
    int y = num1 % num2;
    printf("reste de la division euclidienne %d\n",y);
    return 0;
}


int ET_logique(int num1, int num2){
    int y = num1 && num2;
    printf("a et b %d\n",y);
    return 0;
}

int OU_logique(int num1, int num2){
    int y = num1 || num2;
    printf("a ou b %d\n",y);
    return 0;
}

int NON_logique(int num1){
    int y = !num1 ;
    printf("non a %d\n",!y);
    return 0;
}
