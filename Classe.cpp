#include<stdio.h>

int main (){
int n;
scanf("%d",&n);

if(n <= 324) printf("Extremamente pobre");
else if (n <= 648) printf("Pobre");
else if (n <= 1164) printf("Vulneravel");
else if (n <= 1764) printf("Baixa classe media");
else if (n <= 2564) printf("Media classe media");
else if (n <= 4076) printf("Alta classe media");
else if (n <= 9920) printf("Baixa classe alta");
else{ printf ("Alta classe alta");    
}

}
