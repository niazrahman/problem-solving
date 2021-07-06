#include <stdio.h>
#include<stdio.h>
int main(){
int m,n,i,temp,sum=0,result,b=0;
int p = 1;
while(p){
scanf("%d %d",&m,&n);
if(m>n){
    temp = m;
    m=n;
    n=temp;
}
if(m==0||n==0||n<0||m<0){
    p=-1;
    break;
}else{
    for(i=m;i<=n;i++){
        sum = sum + i;
        printf("%d ",i);
        result = sum;     
    }
      sum = b;
}
    printf("Sum=%d\n",result);   
}
   return 0;
}
