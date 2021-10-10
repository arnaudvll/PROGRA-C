#include <stdio.h> // Bibliotèque utilisée

int main() {
    int rayon = 10; // Création d'une variable, cette variable est entière (int)
    float pi = 3.141592; // Création d'une variable, cette variable est qui peeut être décimale (float)
    float aire = pi*rayon*rayon; // Variable pour l'aire 
    float perim = 2*pi*rayon; // variable pour le périmètre
    printf("L'aire du cercle est %f\n", aire); // affichage de la variable de l'aire
    printf("Le périmètre du cercle est %f\n", perim); // affichage de la variable du périmètre 
    return 0;
}

// Dans cet exercice nous avons réalisé des calucls d'air et de périmètre d'un cercle pour nous familiarisé avec la déclaration 
// de variable ayant des natures différentes ( entière, décimale...)