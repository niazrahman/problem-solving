#include <stdio.h>

int main()
{
    int a,b,c;
    int abs,abs1;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b){
      abs = (-1)*(a-b); 
    }else{
        abs = (a-b);
    }
    int d = ((a+b)+abs)/2; 
    if(d<c){
        abs1 = (-1)*(d-c);
    }else{
        abs1 = (d-c);
    }   
    int ab = ((d+c)+abs1)/2;
    printf("%d eh o maior\n",ab);
    return 0;
}