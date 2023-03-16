#include<stdio.h>

int main(){
    
    int s,m,h,res;
    scanf("%d",&s);
    h = s/3600;
    m = (s%3600)/60;
    res = (s%60);
    printf("%d:%d:%d",h,m,res);
}
