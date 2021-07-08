#include<stdio.h>
int main(){
int n,factor = 1,i;
scanf("%d",&n);
for(i=n;i>=1;i--){
    factor*=i;
}
printf("%d\n",factor);

    return 0;
}