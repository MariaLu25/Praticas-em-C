#include <stdio.h>
    
int main(){
 int n;
            
scanf("%d",&n);

if(n%2 == 0){
 printf("%d e multiplo do 1-esimo numero primo, cujo valor e 2",n);}
                
else if(n%3 == 0 ){
printf("%d e multiplo do 2-esimo numero primo, cujo valor e 3",n);}
                    
else if(n%5 == 0){ 
printf("%d e multiplo do 3-esimo numero primo, cujo valor e 5",n);}
                        
else if(n%7 == 0){
printf("%d e multiplo do 4-esimo numero primo, cujo valor e 7",n);}
                            
 else if(n%11 == 0){
printf("%d e multiplo do 5-esimo numero primo, cujo valor e 11",n);}
                                
else {printf("%d nao e multiplo de nenhum dos 5 primeiros numeros primos",n);}

}
