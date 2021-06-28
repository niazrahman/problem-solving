#include <stdio.h>
 
int main(){
int i,n=5,pos = 0,neg=0,eve=0,odd=0;
int num;
for(i=1;i<=n;i++){
    scanf("%d",&num);
    if(num % 2 == 0){
        eve++;
    }
    if(num % 2 !=0){
        odd++;
    }
    if(num>0){
        pos++;         
    }
    if(num<0){
        neg++;      
    }    
}
printf("%d valor(es) par(es)\n",eve);
printf("%d valor(es) impar(es)\n",odd);
printf("%d valor(es) positivo(s)\n",pos);
printf("%d valor(es) negativo(s)\n",neg);
    return 0;
}