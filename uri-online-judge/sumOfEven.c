#include<stdio.h>

int main(){
int x,i,sum=0;
  
while(scanf("%d",&x)){
    if(x==0){
       break;
   }
     for(i=x;i<=x+9;i++){
           if(i%2==0){
               sum=sum+i;
           }
       }
       printf("%d\n",sum);
       sum=0;
}

    return 0;
}