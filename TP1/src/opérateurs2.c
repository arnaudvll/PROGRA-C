#include <stdio.h> // Bibliothèque utilisée

int main() {
    int num1 = 15;
    int num2 = 5;
    char op = '*';
    int n;
    
    // on crée une concordance entre op et la variable n car on ne peut pas utiliser de chaîne de caractère comme condition ppur switch
    if (op == '+') {
        n = 1;
    }
    else if (op == '-') {
        n = 2;
    }
    else if (op == '*') {
        n = 3;
    }
    else if (op == '/') {
        n = 4;
    }
    else if (op == '%') {
        n = 5;
    }
    else if (op == '&') {
        n = 6;
    }
    else if (op == '|') {
        n = 7;
    }
    else if (op == '~') {
        n = 8;
    }
    
    // on effectue chaque opération demandée en fonction de la valeur de n
    switch (n) {
        case 1 : 
            printf("addition %d\n",num1+num2);
            break;
        case 2 : 
            printf("soustraction %d\n",num1-num2);
            break;
        case 3 :
            printf("multiplication %d\n",num1*num2);
            break;
        case 4 :
            printf("division entière %d\n",num1/num2);
            break;
        case 5 :
            printf("reste de la division euclidienne %d\n",num1%num2);
            break;
        case 6 :
            printf("a et b %d\n",num1 && num2);
            break;
        case 7 :
            printf("a ou b %d\n",num1 || num2);
            break;
        case 8:
            printf("non a %d\n",!num1);
            break;
    }
    return 0;
}
