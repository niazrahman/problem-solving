#include<stdio.h>

int main(void){
int x,y,p=1;
while(p){
    scanf("%d %d",&x,&y);
        if(x>0 && y>0){
            printf("primeiro\n");
        }else if(x>0 && y<0){
            printf("quarto\n");
        }else if(x<0 && y<0){
            printf("terceiro\n");
        }else if(x<0 && y>0){
            printf("segundo\n");
        }else{
            p = -1;
            break;
        }
    }
    return 0;
}