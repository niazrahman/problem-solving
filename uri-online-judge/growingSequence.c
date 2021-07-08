#include<stdio.h>

int main(){
    int i,x;
    int p =1;
    while (p){
        scanf("%d",&x);
        for(i=1;i<=x;i++){
            if(i==x){
                printf("%d",i);
            }else{
                printf("%d ",i);
            }
            
        }
         
        if(x==0){
            p=-1;
            break;
        }
        printf("\n");
    }
    return 0;
}