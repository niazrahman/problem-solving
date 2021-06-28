#include<stdio.h>
#include<math.h>

int main(){
double a,b,c,x1,x2;
scanf("%lf %lf %lf",&a,&b,&c);
double d = ((b*b)-4*a*c);
x1 = (-b + sqrt(d))/(2*a);
x2 = (-b - sqrt(d))/(2*a);
if(d<0|| a == 0){
    printf("Impossivel calcular\n");
}else{
    printf("R1 = %.5lf\n",x1);
    printf("R2 = %.5lf\n",x2);
}
    return 0;
}