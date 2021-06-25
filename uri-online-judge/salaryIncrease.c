#include <stdio.h>
 
int main() {
 
    float a; //a == salary
    scanf("%f",&a);
   float inc_1 = (a*15)/100;
   float a_1 = a+inc_1;
   float inc_2 = (a*12)/100;
   float a_2 = a+inc_2;
   float inc_3 = (a*10)/100;
   float a_3 = a+inc_3;
   float inc_4 = (a*7)/100;
   float a_4 = a+inc_4;
   float inc_5 = (a*4)/100;
   float a_5 = a+inc_5;

    if(a>0 && a<=400.00){
        printf("Novo salario: %.2f\n",a_1);
        printf("Reajuste ganho: %.2f\n",inc_1);
        printf("Em percentual: 15 %%\n");
    }else if(a>400.00 && a<=800.00){
        printf("Novo salario: %.2f\n",a_2);
        printf("Reajuste ganho: %.2f\n",inc_2);
        printf("Em percentual: 12 %%\n");
    }else if(a>800.00 && a<=1200.00){
        printf("Novo salario: %.2f\n",a_3);
        printf("Reajuste ganho: %.2f\n",inc_3);
        printf("Em percentual: 10 %%\n");
    }else if(a>1200.00 && a<=2000.00){
        printf("Novo salario: %.2f\n",a_4);
        printf("Reajuste ganho: %.2f\n",inc_4);
        printf("Em percentual: 7 %%\n");
    }else if(a>2000.00){
        printf("Novo salario: %.2f\n",a_5);
        printf("Reajuste ganho: %.2f\n",inc_5);
        printf("Em percentual: 4 %%\n");
    }else{
        printf("wrong input\n");
    }
    return 0;
}