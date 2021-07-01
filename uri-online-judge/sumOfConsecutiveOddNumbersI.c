#include<stdio.h>

int main(void){
    int x, y,i,min,max,sum =0;
    scanf("%d %d",&x,&y);
 if(x < y){
  min = x;
  max = y;
 }else{
  max = x;
  min = y;
 }

 for(i = (min + 1); i < max; i++)
 {
  if(i % 2 == 1 || i % 2 == -1){
   sum =sum + i;
  }
 }

 printf("%d\n", sum);

    return 0;
}