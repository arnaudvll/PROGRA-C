#include <stdio.h>

#define N 100 //on définit la taille du tableau

int main() {    
    int tableau[N]; //on crée le tableau de taille 100
    int tableau_croiss[N]; //on crée le tableau qui prendra les valeurs triées par ordre croissant
    int i;
    for(i = N; i > 0; i--) {
        tableau[N-i] = i; //on remplit le tableau d'origine avec des valeurs allant de 100 à 0
    }

    int petit = 32767; //plus grand entier possible
    int j;
    int indice;
    printf("Tableau croissant: [");
    for(j = 0; j < N; j++) { //indices pour le tableau croissant
        for(i = 0; i < N; i++) { //indices pour le tableau non trié
            if(tableau[i] < petit) { //on cherche la valeur la plus petite du tableau
                petit = tableau[i];
                indice = i;
            }
        }
        tableau[indice] = 32767; //on remplace cette valeur par une valeur très grande pour ne plus la prendre en compte
        tableau_croiss[j] = petit; //on place la plus petite valeur trouvée dans le tableau croissant
        if (j == N-1) {
            printf("%d", tableau_croiss[j]);
        }

        else {
            printf("%d,", tableau_croiss[j]); //on affiche les valeurs du tableau trié
        }

        petit = 32767; //on réinitialise la variable petit et on continue avec la prochaine plus petite valeur
    }

    printf("]\n");
    return(0);
}
