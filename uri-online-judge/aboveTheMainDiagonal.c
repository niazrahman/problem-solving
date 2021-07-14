#include<stdio.h>

int main(){
int i,j;
int spy=0;
float num;
float sum = 0.0;
int elements=0;
char operation;
scanf("%c",&operation);
for(i=0;i<=11;i++){
    for(j=0;j<=11;j++){
        scanf("%f",&num);
        if(j>spy){
            sum = sum+num;
            elements++;
        }
    }
    spy++;
}
if(operation =='S'){
    printf("%.1f\n",sum);
}else{
    printf("%.1f\n",sum/elements);
}

    return 0;
}