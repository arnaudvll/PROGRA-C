#include <stdio.h> // Bibliotèques utilisées
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int tab_int[10]; //création du tableau de 10 entiers
    int* iptr = (int *)&tab_int; //création du pointeur sur la première valeur du tableau d'entier
    

    float tab_float[10]; //création du tableau de 10 nombres décimaux
    float* fptr = (float *)&tab_float; //création du pointeur sur la première valeur du tableau de nombres décimaux

    for (int i = 0; i < 10; i++) { //on remplit aléatoirement les 2 tableaux
        tab_int[i] = rand();
        tab_float[i] = ((float)rand()/(float)RAND_MAX) * 1000; //création des nombres décimaux aléatoires
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0){ //si l'indice est divisible par 2
            *(iptr+i) *= 3; //on accède à l'entier pointé par le pointeur qu'on multiplie par 3
            *(fptr+i) *= 3; //on accède au nombre décimal pointé par le pointeur qu'on multiplie par 3
        }
    }

    //on affiche les deux tableaux après modification
    printf("Tableau d'entiers modifié: \n");
    for (int i = 0; i < 10; i++){printf("%d\n",tab_int[i]);} 

    printf("Tableau des nombres décimaux modifié: \n");
    for (int i = 0; i < 10; i++){printf("%f\n",tab_float[i]);}

    return(0);
}