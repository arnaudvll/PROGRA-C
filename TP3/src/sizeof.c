#include <stdio.h>

int main() {
    printf("%ld octets pour  char*\n", sizeof(char*));
    printf("%ld octets pour  char**\n", sizeof(char**));
    printf("%ld octets pour  char***\n", sizeof(char***));
    printf("%ld octets pour int\n", sizeof(int));
    printf("%ld octets pour int*\n", sizeof(int*));
    printf("%ld octets pour int**\n", sizeof(int**));
    printf("%ld octets pour float*\n", sizeof(float*));
    printf("%ld octets pour float**\n", sizeof(float**));
    printf("%ld octets pour float***\n", sizeof(float***));
    return(0);
}
