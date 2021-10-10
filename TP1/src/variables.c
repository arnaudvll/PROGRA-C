#include <stdio.h> // Bibliotèque utilisée

int main() {
    char my_char_var = 'a';
    unsigned char my_uchar_var = 234;
    short my_short_var = -12;
    unsigned short my_ushort_var = 65535;
    int my_int_var = 12;
    unsigned int my_uint_var = 3456;
    long my_long_var = -1234553L;
    unsigned long my_ulong_var = 234556UL;
    long long my_llong_var = 1123345LL;
    unsigned long long my_ullong_var = 1234567ULL;
    float my_float_var = 3.14;
    double my_double_var = 3.14E-12;
    long double my_long_double_var = 3.14E-22;
    
    printf("La valeur du char est %c\n", my_char_var);
    printf("La valeur du unsigned char est %hhu\n", my_uchar_var);
    printf("La valeur du short est %hd\n", my_short_var);
    printf("La valeur du unsigned short est %hu\n", my_ushort_var);
    printf("La valeur du int est %d\n", my_int_var);
    printf("La valeur du unsigned int est %u\n", my_uint_var);
    printf("La valeur du long est %ld\n", my_long_var);
    printf("La valeur du unsigned long est %lu\n", my_ulong_var);
    printf("La valeur du long long est %lld\n", my_llong_var);
    printf("La valeur du unsigned long long est %llu\n", my_ullong_var);
    printf("La valeur du float est %f\n", my_float_var);
    printf("La valeur du double est %g\n", my_double_var);
    printf("La valeur du long double est %Lg\n", my_long_double_var);
    
    return 0;  
}
    
// Dans cet exercice, on s'est entrainé à utilisé les différents types de base avec la déclaration de différentes variables
// Nous avons aussi étudier comment s'affichait chaque type de base puisque c'est différent pour chaque type