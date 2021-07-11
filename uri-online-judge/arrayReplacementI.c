#include<stdio.h>

int main(){
    int i,x=1;
    int X[10];
    for(i=0;i<10;i++){
        scanf("%d\n",&X[i]);
        if(X[i]<=0){
           X[i]=x;
        }
    }
    for(i=0;i<10;i++){
         
        printf("X[%d] = %d\n",i,X[i]);
    }
    return 0;
}