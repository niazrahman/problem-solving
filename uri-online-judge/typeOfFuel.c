#include <stdio.h>
 
#include<stdio.h>
int main(){
int c1=0,c2=0, c3=0,n;
int p=1;
while(p){
    scanf("%d",&n);
    if(n==1){
        c1++;
    }else if(n==2){
        c2++;
    }else if(n==3){
        c3++;
    }else if(n==4){
        p=-1;
        break;
    }
}
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n",c1);
printf("Gasolina: %d\n",c2);
printf("Diesel: %d\n",c3);
    return 0;
}