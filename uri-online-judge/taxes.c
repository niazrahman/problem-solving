#include <stdio.h>
 
int main() {
 

    float n;
    scanf("%f",&n);
    if(n>2000.00 && n<=3000.00){
        n-=2000.00;
        float tax1 = (n*8)/100;
        printf("R$ %.2f\n",tax1);
    }else if(n>3000.00 && n<=4500.00){
        n-=3000.00;
        float fixed = (1000.00*8)/100;
        float tax2 = (n*18)/100;
        float final_tax = fixed+tax2;
        printf("R$ %.2f\n",final_tax);
    }else if(n>4500.00){
        n-=4500;
        float fixed = (1000.00*8)/100;
        float fixed2 = (1500.00*18)/100; 
        float tax3 = (n*28)/100;
       float final_tax2 = fixed+fixed2+tax3;
        printf("R$ %.2f\n",final_tax2);
    }else{
        printf("Isento\n");
    }
 
    return 0;
}