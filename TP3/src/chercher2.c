#include <stdio.h> // Bibliothèque utilisée

int main(){
    char* tab[10]; // declaration du tableau initial de taille 10
    char* tab2[10]; // on crée un deuxième tableau de taille 10 qu'on utilisera pour mettre uniquement les phrases de même taille que la phrase à tester
    int taille_test; // taille de la phrase à tester (qu'on définira plus tard)
    int taille_phrase; // taille de la phrase dans le tableau d'origine
    int a = 0;
    int trouve = 0;

    // initialisation des 10 phrases du tableau
    tab[0] = "bonjour";
    tab[1] = "je m'appelle";
    tab[2] = "hello";
    tab[3] = "comment ca va";
    tab[4] = "je suis";
    tab[5] = "d'accord";
    tab[6] = "je vais";
    tab[7] = "allez y";
    tab[8] = "je fais";
    tab[9] = "salut";    

    // initalisation de la phrase à tester
    char* test = "allez y"; 

    for (taille_test = 0; test[taille_test]; taille_test++); // calcul de la taille de la phrase à tester
    
    for (int i = 0; i < 10; i++) { // on parcourt chaque phrase dans le tableau
        for (taille_phrase = 0; tab[i][taille_phrase] ; taille_phrase++); // on calcule les tailles de chaque phrase dans le tableau
        if (taille_phrase == taille_test) { // pour chaque phrase dans le tableau, si elle a la même taille que la phrase à tester
            tab2[a] = tab[i]; // on remplit le 2ème tableau avec les phrases de même taille
            a++;
            continue;
        }
    }
    // on récupère dans la variable a le nombre de phrases dans tab2
    
    for (int i = 0; i < a; i++) { // indice pour parcourir tab2
        for (int j = 0; j < taille_test; j++) { // indice pour parcourir la phrase à tester
            if (tab2[i][j] == test[j]) { // on regarde, caractère par caractère, si les phrases sont égales 
                if (j == taille_test-1) { // si on a testé le dernier caractère des 2 phrases à comparer et qu'ils sont égaux, alors la phrase à tester est dans le tableau
                    printf("La phrase testée est dans le tableau\n");
                    trouve = 1;
                }
            }
        }
    }

    if (trouve == 0) {
        printf("La phrase testée n'est pas dans le tableau\n");
    }
    return 0;
}
