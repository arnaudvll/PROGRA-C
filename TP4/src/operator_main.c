#include <stdio.h> // Bibliothèque utilisée
#include "operator.h"

int main() {
    int num1 = 15;
    int num2 = 5;
    char op = '*';
    int n;
    
    switch (op) {
        case '+' : 
            somme(num1, num2);
            break;

        case '-' : 
            difference(num1, num2);
            break;
            
        case '*' :
            produit(num1, num2);
            break;
            
        case '/' :
            quotient(num1, num2);
            break;
            
        case '%' :
            modulo(num1, num2);
            break;
            
        case '&' :
            et(num1, num2);
            break;
            
        case '|' :
            ou(num1, num2);
            break;
            
        case '~':
            negation(num1);
            break;
    }
    return 0;
}
