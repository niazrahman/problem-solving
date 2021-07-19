#include<stdio.h>

int main(){
    
int i,j,elements=0;
int spy = 11;
double num,sum=0.0;
char operation;

scanf("%c",&operation);



for(i=0;i<=11;i++){

    for(j=0;j<=11;j++){
            scanf("%lf",&num);
        if(j>i&&j<spy){
           sum=sum+num;
           elements++;
        }  
    }
    
    spy-=1;
}


if(operation=='S'){
    printf("%.1lf\n",sum);
}
else{
    printf("%.1lf\n",(double)sum/elements);
}
    return 0;
}