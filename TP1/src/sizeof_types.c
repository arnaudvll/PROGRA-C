#include <stdio.h> // Bibliotèque utilisée

int main() {
    printf("%ld octets pour char\n", sizeof(char));
    printf("%ld octets pour unsigned char\n", sizeof(unsigned char));
    printf("%ld octets pour short\n", sizeof(short));
    printf("%ld octets pour unsigned short\n", sizeof(unsigned short));
    printf("%ld octets pour int\n", sizeof(int));
    printf("%ld octets pour unsigned int\n", sizeof(unsigned int));
    printf("%ld octets pour long int\n", sizeof(long int));
    printf("%ld octets pour unsigned long int\n", sizeof(unsigned long int));
    printf("%ld octets pour long long int\n", sizeof(long long int));
    printf("%ld octets pour unsigned long long int\n", sizeof(unsigned long long int));
    printf("%ld octets pour float\n", sizeof(float));
    printf("%ld octets pour double\n", sizeof(double));
    printf("%ld octets pour long double\n", sizeof(long double));
    return 0;
}
// Dans cet exercice, nous avons utilisé la commande "sizeof" qui permet de renvoyer la taille en octet des différentes
// commandes de déclaration de variables