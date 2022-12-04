#include <stdio.h>


int main (){
    
    int n,d,result,res;
    
    scanf("%d/%d",&n,&d);
 
    result = n/d;
    res = n%d;
    
    printf("Na divisao de %d por %d, o quociente e %d e o resto da divisao e %d",n,d,result,res);

    
}
