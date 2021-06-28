#include<stdio.h>

int main(){
    double a,b,c,big;
    scanf("%lf %lf %lf",&a, &b, &c);
    if(a<b){
        big = b;
        b = a;
        a = big;
    }
    if(a<c){
        big = c;
        c = a; 
        a =big;
 
    }
    if(a>= b+c){
        printf("NAO FORMA TRIANGULO\n");
    }else if((a*a)== (b*b)+(c*c)){
        printf("TRIANGULO RETANGULO\n");
    }else if((a*a)>(b*b)+(c*c)){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if((a*a)<(b*b)+(c*c)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    }else if(a==b||a==c||b==c){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}