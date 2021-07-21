#include<stdio.h>
int main(){
int d;
scanf("%d",&d);
int res = 2, sum=2;
for(int i = 2 ; i<=d;i++){
    res = res*3;
    res = res /2;
    sum = sum+res;

}
printf("%d\n",sum);
    return 0;
}
