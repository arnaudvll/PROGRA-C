#include <stdio.h> // Bibliothèque utilisée

int main() {
    //création de toutes les variables et de leurs pointeurs associés
    char my_char_var;
    char* cptr = &my_char_var; 

    short my_short_var;
    short* sptr = &my_short_var;

    int my_int_var;
    int* iptr = &my_int_var;

    long my_long_var;
    long* lptr = &my_long_var;

    long long my_llong_var;
    long long* llptr = &my_llong_var;

    float my_float_var;
    float* fptr = &my_float_var;

    double my_double_var;
    double* dptr = &my_double_var;

    long double my_long_double_var;
    long double* ldptr = &my_long_double_var;

    //affectation des valeurs aux variables crées
    *cptr = 'a';
    *sptr = -12;
    *iptr = 12;
    *lptr =  -1234553L;
    *llptr = 1123345LL;
    *fptr = 3.14;
    *dptr = 3.14E-12;
    *ldptr = 3.14E-22;

    //affichage des variables grâce à leurs adresses
    printf("%c\n", *cptr);
    printf("%hd\n", *sptr);
    printf("%d\n", *iptr);
    printf("%ld\n", *lptr);
    printf("%lld\n", *llptr);
    printf("%f\n", *fptr);
    printf("%g\n", *dptr);
    printf("%Lg\n", *ldptr);

    return(0);
}

// Dans cet exercice nous avons affiché les valeurs des variables de différents types de base en utilisant leurs adresses et des pointeurs
