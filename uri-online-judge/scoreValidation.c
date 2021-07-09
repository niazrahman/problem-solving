#include<stdio.h>

int main(){
float a,b,num1=0.0,num2=0.0,avrg=0.0;
scanf("%f %f",&a,&b);
while(1){
    
    if(a>=0.0&&a<=10.0){
    num1=a;
    }else{
        printf("nota invalida\n");
        scanf("%f",&a);
    }
    if(b>=0.0 && b<=10.0){
    num2 = b;
    }else{
        printf("nota invalida\n");
        scanf("%f",&b);
    }
if(num1==a&&num2==b){
    break;
}
       
}
  avrg = (num1+num2)/2.00;
printf("media = %.2f\n",avrg);

    return 0;
}