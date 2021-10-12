#include <stdio.h> // Bibliotèques utilisées


// On utilise la fonction donnée dans l'ennoncé
int factorielle (int num) {
    if (num == 0) {
        return 1;
    }
    else {
        return (num * factorielle (num-1));
      
    }
}


int main(){
    int num;
    printf("Factorielle:");
    scanf("%d",&num);
    int y = factorielle ( num );
    printf("Resultat: %d\n",y);
    
    return 0;
}

// Dans ce code nous affichons le factorielle d'un entier que l'on tape sur le terminal
