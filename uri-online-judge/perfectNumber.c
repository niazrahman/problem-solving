#include<stdio.h>

int main(){
    int n,i,j,sum=0,count=0;
    int num;


   
    scanf("%d",&num);

    for(i=1;i<=num;i++){
     scanf("%d",&n);
     for(j=1;j<n;j++){
    if(n%j==0){ 
        sum=sum+j;
    }
    
    }
    if(sum==n){
        printf("%d eh perfeito\n",n);
    }else{
        printf("%d nao eh perfeito\n",n);   
        }
        sum=0;
}


    return 0;
}