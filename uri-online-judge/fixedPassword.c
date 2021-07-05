#include<stdio.h>

int main(void){

int pass = 2002,n;
int p=1;
while(p){
        scanf("%d",&n);
    if(n != 2002){
        printf("Senha Invalida\n");
    }else{
        printf("Acesso Permitido\n");
        p=-1;
        break;
    }
}
    return 0;
}