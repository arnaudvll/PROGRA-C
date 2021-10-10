#include <stdio.h> // Bibliotèque utilisée

int main() {
    int num1 = 15;
    int num2 = 5;
    char op = '*';
    int n;
    
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
    
    switch (n) {
        case 1 : 
            printf("addition %d\n",num1+num2);
        case 2 : 
            printf("soustraction %d\n",num1-num2);
        case 3 :
            printf("multiplication %d\n",num1*num2);
        case 4 :
            printf("division entière %d\n",num1/num2);
        case 5 :
            printf("reste de la division euclidienne %d\n",num1%num2);
        case 6 :
            printf("a et b %d\n",num1 && num2);
        case 7 :
            printf("a ou b %d\n",num1 || num2);
        case 8:
            printf("non a %d\n",!num1);
    }
    return 0;
}
