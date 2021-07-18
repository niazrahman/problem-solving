#include<stdio.h>

int main(){
int i,j,elements;
int spy = 11;
float num,sum=0.0;
char operation;
scanf("%c",&operation);
for(i=0;i<=11;i++){

    for(j=0;j<=11;j++){
            scanf("%f",&num);
        if(i>j&&j<spy){
           sum=sum+num;
           elements++;
        }  
    }
    spy--;
 
}

if(operation=='S'){
    printf("%.1f\n",sum);
}else{
    printf("%.1f\n",sum/elements);
}
    return 0;
}