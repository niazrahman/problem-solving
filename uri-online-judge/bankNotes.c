#include <stdio.h>
 
int main() {
 
int n;
scanf("%d",&n);
if(n>0 && n<100000){
    printf("%d\n",n);
}else{
    printf("wrong input\n");
}

int first = n/100;
printf("%d nota(s) de R$ 100,00\n",first);
int second = (n%100);
int final = second/50;
printf("%d nota(s) de R$ 50,00\n",final);
int third = (second%50);
 int final_2 = third/20;
printf("%d nota(s) de R$ 20,00\n",final_2);
int fourth = (third%20);
    int final_3 = fourth/10;
printf("%d nota(s) de R$ 10,00\n",final_3);
int fifth = (fourth%10);
int final_4 = fifth/5;
printf("%d nota(s) de R$ 5,00\n",final_4);
int sixth = (fifth%5);
int final_5 = sixth/2;
printf("%d nota(s) de R$ 2,00\n",final_5);
int seventh = (sixth%2);
int final_6 = seventh/1;
printf("%d nota(s) de R$ 1,00\n",final_6);
 
    return 0;
}