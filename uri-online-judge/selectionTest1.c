#include <stdio.h>
 
int main() {
 
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    int sum1 = C+D;
    int sum2 = A+B;
 if(B>C && D>A){
     if(sum1>sum2){
         if(C>=0 && D>=0){
             if(A%2 == 0){
                 printf("Valores aceitos\n");
             }else{
                 printf("Valores nao aceitos\n");
            }
            }else{
             printf("Valores nao aceitos\n");
            }
            }else{
            printf("Valores nao aceitos\n");
                }
         }else{
            printf("Valores nao aceitos\n");
            }
    return 0;
}