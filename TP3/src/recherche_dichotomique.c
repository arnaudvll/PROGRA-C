#include <stdio.h>

#define N 100 //on définit la taille du tableau

int main() {
    int tableau[N]; //création du tableau de taille 100
    int tableau_croiss[N]; //création du tableau qui va prendre les valeurs triées par ordre croissant
    int i;
    for(i = N; i > 0; i--) {
        tableau[N-i] = i; //on remplit le tableau de base avec des valeurs allant de 100 à 0 en ordre décroissant pour l'exemple
    }

    int petit = 32767; //plus grand entier possible
    int j;
    int indice;
    for(j = 0; j < N; j++) { //indices pour le tableau croissant
        for(i = 0; i < N; i++) { //indices pour le tableau non trié
            if(tableau[i] < petit) { //on cherche la valeur la plus petite du tableau
                petit = tableau[i];
                indice = i;
            }
        }
        tableau[indice] = 32767; //on remplace cette valeur par une valeur très grande pour ne plus la prendre en compte
        tableau_croiss[j] = petit; //on place la plus petite valeur trouvée dans le tableau croissant
        petit = 32767; //on réinitialise la variable petit et on continue avec la prochaine plus petite valeur
    }

    int num;
    printf("Tapez le num svp: ");
    scanf("%d",&num); //on demande à l'utilisateur de rentrer une valeur dans la variable num
    int debut = 0;
    int fin = N;
    char trouve = 'F';
    int mil;
    while((trouve == 'F') & (debut <= fin)) { //tant que l'on a pas trouvé la valeur dans la liste
        mil = (debut + fin)/2; //on prend le milieu de l'intervalle considéré (pour la première itération, c'est donc le milieu du tableau croissant)
        if(tableau_croiss[mil] == num) { //si la valeur au milieu est la valeur cherchée, on sort de la boucle while
            trouve = 'V';
        }
        else {
            if(num > tableau_croiss[mil]) { //sinon, on réduit l'intervalle considéré à la première ou deuxième moitié de l'intervalle précédent puis on recommence la boucle jusqu'à trouver la valeur ou que l'intervalle soit devenu trop petit
                debut = mil+1;
            }
            else {
                fin = mil-1;
            }
        }
    }

    //affichage du résultat de la recherche
    if(trouve == 'V') {
        printf("Entier présent\n");
    }

    else {
        printf("Entier non présent\n");
    }

    return(0);
}
