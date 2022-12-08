#include<stdio.h>

int main (){
char n;
scanf("%c",&n);


if (n == '+') printf("Soma");
else if (n == '-') printf("Subtracao");
else if (n == '*') printf("Multiplicacao");
else if (n == '/') printf("Divisao");
else if (n == '%') printf("Resto da divisao");
else{ printf("NDA");}

}
