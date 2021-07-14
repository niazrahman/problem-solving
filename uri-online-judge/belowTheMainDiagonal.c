#include<stdio.h>
int main(){

int i,j,elements=0;
int spy = 0;
float sum=0.0;
float num;
char operation;
scanf("%c",&operation);

for (i=0;i<=11;i++){
    for(j=0;j<=11;j++){
        scanf("%f",&num);
        if(i>0&&j<spy){
            sum=sum+num;
            elements++;
        }
    }
    spy++;
}
if(operation=='S'){
    printf("%.1f\n",sum);
}else{
    printf("%.1f\n",sum/elements);
}
    return 0;
}