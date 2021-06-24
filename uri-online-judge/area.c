#include <stdio.h>
 
int main() {
 
double a,b,c,pi=3.14159;
scanf("%lf %lf %lf",&a,&b,&c);
double triangle,circle,trapezium,square,rectangle;
triangle = (a*c)/2;
circle = pi*c*c;
trapezium = ((a+b)/2)*c;
square = b*b;
rectangle = a*b;
printf("TRIANGULO: %.3lf\n",triangle);
printf("CIRCULO: %.3lf\n",circle);
printf("TRAPEZIO: %.3lf\n",trapezium);
printf("QUADRADO: %.3lf\n",square);
printf("RETANGULO: %.3lf\n",rectangle);
 
    return 0;
}