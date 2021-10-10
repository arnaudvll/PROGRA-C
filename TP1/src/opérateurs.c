#include <stdio.h> // Bibliotèque utilisée

int main() {
    int a = 16;
    int b = 3;

    // Opérations arithmétiques
    printf("a=%d",a);
    printf("b=%d",b);
    printf("addition %d\n",a+b); // Addition 
    printf("soustraction %d\n",a-b); // Soustraction
    printf("multiplication %d\n",a*b); // Multiplication
    printf("division entière %d\n",a/b); // Division entière 
    printf("reste de la division euclidienne %d\n",a%b); // Division euclidienne

    // Opérations logiques
    printf("non a %d\n",!a); // Non
    printf("a et b %d\n",a && b); // Et
    printf("a ou b %d\n",a || b); // Ou
    return 0;
}
 // Dans cet exercice nous avons étudié les différents opérateurs arithmétiques et logiques en déclarant 2 variables entières