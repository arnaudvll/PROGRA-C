#include <stdio.h>
#include <stdlib.h> // bibliotheque du random
int main(){
    int tabl[100]; // declaration de notre tableau  initial contenant 100 cases
    int valeur;
    int a=0;
    printf("valeur?");
    scanf("%d",&valeur);
    for(int i=0;i<100;i++){ // boucle qui permet de balayer des indices du tableau initial
        tabl[i]=rand()%1000+1; // on créé des valeurs aléatoirs entre 1 et 1000
        if (tabl[i]==valeur){
            printf("\n c'est bon");
            a=1;
            continue;
        }
        
    }
    if (a==0){
        printf("\nnon");
    }
}