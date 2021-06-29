#include<stdio.h>

int main(){
double i, result,sum=0.0;
for(i=1;i<=100;i++){
    result = 1/i;
    sum=sum+result;
}
printf("%.2lf\n",sum);
    return 0;
}