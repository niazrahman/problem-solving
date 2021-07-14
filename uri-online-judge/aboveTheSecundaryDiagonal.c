#include<stdio.h>

int main(){

int i,j,elements=0;
float num;
float sum=0.0;
char ch;
scanf("%c",&ch);
int spy=10;
for(i=0;i<=11;i++){
    for(j=0;j<=11;j++){
        scanf("%f",&num);
        if(j<=spy){
            sum = sum + num;
            elements++;

        }
    }
    spy--;
}
if(ch=='S'){
    printf("%.1f\n",sum);
}else{
    printf("%.1f\n",sum/elements);
}

    return 0;
}