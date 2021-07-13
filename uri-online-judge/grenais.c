#include<stdio.h>

int main(){

int i,j,count=1,count1=0,count2=0,count3=0,n;
    scanf("%d %d",&i,&j);
printf("Novo grenal (1-sim 2-nao)\n");
if(i>j){
    count1++;
}else if(j>i){
    count2++;
}else if(i==j){
    count3++;
}

while(1){
    scanf("%d",&n);
    if(n==1){
        scanf("%d %d",&i,&j);
        printf("Novo grenal (1-sim 2-nao)\n");
        count++;  
    }else{
        break;
    }
     if(i>j){
         count1++;
        }
        if(j>i){
         count2++;
        }
        if(i==j){
         count3++;
        }  
}     
    printf("%d grenais\n",count);
    printf("Inter:%d\n",count1);
    printf("Gremio:%d\n",count2);
    printf("Empates:%d\n",count3);
    if(count1>count2){
        printf("Inter venceu mais\n");
    }else if(count2>count1){
        printf("Gremio venceu mais\n");
    }else if(count1==count2){
        printf("Não houve vencedor\n");
    }
    return 0;
}