#include <stdio.h> // Bibliothèque utilisée

int main() {
    int compter =  10; // nombre de lignes que l'on veut afficher
    int ligne;
    int colonne;
    for(ligne = 1; ligne < compter+1; ligne++) { // on parcourt chaque ligne et on affiche en fonction de où l'on est
        if(ligne == 1) {
            printf("*\n"); // On s'occupe de la première ligne ici donc on affiche 1 "*" puis on va à la ligne suivante
        }
        
        else if(ligne == 2) {
            printf("**\n"); // On s'occupe de la deuxième ligne ici donc on affiche 2 "*" puis on va à la ligne suivante
        }
        
        else if(ligne == compter) {
            for(; compter > 0; compter--){ // On s'occupe de la dernière ligne ici donc on affiche "compter" "*" puis on va à la ligne suivante
                printf("*");
            }   
        }
        else { // si on est dans aucun de ces cas
            printf("*"); // on affiche 1 "*"
            for(colonne = 2; colonne < ligne; colonne++) {
                printf("#"); // On affiche des "#" sur le reste de la ligne, sauf à la dernière position
            }
            printf("*\n"); // on affiche 1 "*" en fin de ligne
        }    
    }
    printf("\n");
    return 0;
}
// Dans cet exercice, nous avons fait un programme créant un triangle rectangle de "*", sauf à "l'intérieur" du triangle où on met des "#" 
// La taille du triangle dépend de la valeur de la variable `compter` 
