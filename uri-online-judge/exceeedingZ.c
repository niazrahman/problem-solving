#include<stdio.h>

int main(){

int x,y,i,count=0,sum=0;
scanf("%d",&x);
while(1){
    scanf("%d",&y);
    if(y>x){
        break;
    }
  
   
}
for(i=x;i<=y;i++){
    sum=sum+i;
    count++;
    if(sum>y){
        break;
    }
}
printf("%d\n",count);
    return 0;
}