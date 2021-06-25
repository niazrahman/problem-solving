#include <stdio.h>
 
int main() {
 
    int X,Y;
    scanf("%d %d",&X,&Y);

    if(X == 1){
        float total = (float)4.00*Y;
        printf("Total: R$ %.2f\n",total);
    }else if(X == 2){
        float total = (float)4.50*Y;
        printf("Total: R$ %.2f\n",total);
    }else if(X == 3){
        float total = (float)5.00*Y;
        printf("Total: R$ %.2f\n",total);
    }else if(X == 4){
        float total = (float)2.00*Y;
        printf("Total: R$ %.2f\n",total);
    }else if(X == 5){
        float total = (float)1.50*Y;
        printf("Total: R$ %.2f\n",total);
    }else{
        printf("Please enter the valid product code\n");
    }
 
    return 0;
}