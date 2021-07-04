#include<stdio.h>

int main(){
    int a,b;   
    int p=1;
    while(p){
        scanf("%d %d",&a,&b);
        if(a>b){
            printf("Decrescente\n");
        }else if(b>a){
            printf("Crescente\n");
        }else if(a==b){
            p=-1;
              break;         
        }        
    } 
    return 0;
}