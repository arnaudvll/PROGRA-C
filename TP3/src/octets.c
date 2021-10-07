#include <stdio.h>

int main() {
    //on crée plusieurs variables de différents types
    //on crée pour chaque variable un pointeur pointant leurs adresses (de type char car ce type ne prend qu'on octet ce qui est ce que l'on veut afficher)
    short s = 150;
    char* sptr =(char *)&s; 

    int i = 98;
    char* iptr = (char *)&i;

    long l = -1234553L;
    char* lptr = (char *)&l;

    float f = 3.14;
    char* fptr = (char *)&f;

    double d = 3.14E-12;
    char* dptr = (char *)&d;

    long double ld = 3.14E-22;
    char* ldptr = (char *)&ld;
    
    //on affiche chaque octets des différentes variables (les bits de poids fort et faible sont inversés dans cette notation)
    printf("octets de short: \n");
    printf("%c\n",*sptr);
    printf("%c\n",*(sptr+1));
    
    printf("octets de int: \n");
    printf("%c\n", *iptr);
    printf("%c\n", *(iptr+1));
    printf("%c\n", *(iptr+2));
    printf("%c\n", *(iptr+3));
    
    printf("octets de long int: \n");
    printf("%c\n", *lptr);
    printf("%c\n", *(lptr+1));
    printf("%c\n", *(lptr+2));
    printf("%c\n", *(lptr+3));
    printf("%c\n", *(lptr+4));
    printf("%c\n", *(lptr+5));
    printf("%c\n", *(lptr+6));
    printf("%c\n", *(lptr+7));
    
    printf("octets de float: \n");
    printf("%c\n", *fptr);
    printf("%c\n", *(fptr+1));
    printf("%c\n", *(fptr+2));
    printf("%c\n", *(fptr+3));
    
    printf("octets de double: \n");
    printf("%c\n", *dptr);
    printf("%c\n", *(dptr+1));
    printf("%c\n", *(dptr+2));
    printf("%c\n", *(dptr+3));
    printf("%c\n", *(dptr+4));
    printf("%c\n", *(dptr+5));
    printf("%c\n", *(dptr+6));
    printf("%c\n", *(dptr+7));
    
    printf("octets de long double: \n");
    printf("%c\n", *ldptr);
    printf("%c\n", *(ldptr+1));
    printf("%c\n", *(ldptr+2));
    printf("%c\n", *(ldptr+3));
    printf("%c\n", *(ldptr+4));
    printf("%c\n", *(ldptr+5));
    printf("%c\n", *(ldptr+6));
    printf("%c\n", *(ldptr+7));
    printf("%c\n", *(ldptr+8));
    printf("%c\n", *(ldptr+9));
    printf("%c\n", *(ldptr+10));
    printf("%c\n", *(ldptr+11));
    printf("%c\n", *(ldptr+12));
    printf("%c\n", *(ldptr+13));
    printf("%c\n", *(ldptr+14));
    printf("%c\n", *(ldptr+15));
    
    return(0);
}

//2 octets pour short
//4 octets pour int
//8 octets pour long int
//4 octets pour float
//8 octets pour double
//16 octets pour long double
