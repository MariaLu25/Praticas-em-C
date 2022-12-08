#include<stdio.h>

int main (){
int n;
scanf("%d",&n);

if(n <= 3) printf("fralda");
else if (n <= 5) printf("baby");
else if (n <= 7) printf("kid");
else if (n <= 12) printf("juvenil");
else if (n <= 19) printf("jovem");
else{ printf ("nao permitido");    
}

}
