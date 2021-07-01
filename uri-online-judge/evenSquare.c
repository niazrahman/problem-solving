#include<stdio.h>
int main(void){
int n;
scanf("%d",&n);
if(n>5 && n<2000){
    for(int i=1;i<=n;i++){
        if(i%2==0){
            int pow = i * i;
            printf("%d^2 = %d\n",i,pow);
        }
    }
}
    return 0;
}