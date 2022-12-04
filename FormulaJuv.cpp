#include<stdio.h>


int main (){
    
    float peso, alt, id, ano, dia, soma;
    scanf("%f %f %f %f %f", &peso, &alt, &id,&ano, &dia);
    
    soma = ((peso + alt)/id+ano)*dia;
    
    printf("%f",soma);
    
    
}
