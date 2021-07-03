#include<stdio.h>

int main(){
int n,i;
float a,b,c,w1=2,w2=3,w3=5,product=0,avrg = 0,sum=10.0;
scanf("%d",&n);

for(i=1;i<=n;i++){
scanf("%f %f %f",&a,&b,&c);
    product = (a*w1)+(b*w2)+(c*w3);
    avrg = product/sum;
    printf("%.1f\n",avrg);
   
}
return 0;
}