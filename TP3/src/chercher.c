#include <stdio.h>

#define N 100 //on définit la taille du tableau

int main() {
    int tableau[N]; //création du tableau de taille N
    int i;
    for(i = 0; i < N; i++) { //on remplit le tableau (ici de 0 à 99 de façon croissante)
        tableau[i] = i;
    }

    int num;
    printf("Tapez le numéro svp: ");
    scanf("%d",&num); //on récupère dans la variable num le numéro saisi par l'utilisateur
    for(i = 0; i < N; i++) {
        if(tableau[i] == num) { //on vérifie si l'entier saisi est présent dans le tableau grâce à une boucle for
            printf("Entier présent\n"); //
        }
    }
    return(0);
}
