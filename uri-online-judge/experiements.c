#include<stdio.h>

int main(){
int n,amount=0,total=0,i;
int rab = 0,rat=0,frog = 0;
char a;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d %c",&amount,&a);
    if(amount>=1 && amount<=15){
         total = total + amount;
    }
    if(amount>=1 && amount<=15&&a=='C'){
        rab = rab + amount;
    }else if(amount>=1 && amount<=15&&a=='R'){
        rat = rat + amount;
    }else if(amount>=1 && amount<=15&&a=='S'){
          frog = frog + amount;
    }
   
}
float p1 = (float)(100*rab)/total;
float p2 = (float)(100*rat)/total;
float p3 = (float)(100*frog)/total;
printf("Total: %d cobaias\n",total);
printf("Total de coelhos: %d\n",rab);
printf("Total de ratos: %d\n",rat);
printf("Total de sapos: %d\n",frog);
printf("Percentual de coelhos: %.2f %%\n",p1);
printf("Percentual de ratos: %.2f %%\n",p2);
printf("Percentual de sapos: %.2f %%\n",p3);
    return 0;
}