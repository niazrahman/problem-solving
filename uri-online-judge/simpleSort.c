#include<stdio.h>
int main(void){
int a,b,c,s,x,y,z;
scanf("%d %d %d",&a,&b,&c);
x=a,y=b,z=c;
s=a;
if(a>b){
    s = b;
    b = a;
    a = s;
}
if(a>c){
    s = c;
    c = a;
    a = s;
}
if(b>c){
    s = c;
    c = b;
    b = s;
}
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
printf("\n");
printf("%d\n",x);
printf("%d\n",y);
printf("%d\n",z);
    return 0;
}