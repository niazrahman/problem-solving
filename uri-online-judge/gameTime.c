#include <stdio.h>
 
int main() {
 
   int startTime,endTime,result1,result2;
    scanf("%d %d",&startTime,&endTime);
    if(startTime>12 && endTime<12){
        startTime -=12;
        endTime +=12;
        result1 = endTime - startTime;
        printf("O JOGO DUROU %d HORA(S)\n",result1);
    }else if(startTime<12 && endTime>12){
        result2 = endTime - startTime;
        printf("O JOGO DUROU %d HORA(S)\n",result2);
    }else{
       printf("O JOGO DUROU 24 HORA(S)\n");
    }

 
    return 0;
}