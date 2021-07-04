#include <stdio.h>
#include<stdio.h>

int main(void){
int i,n,max=-1,pos=0;
for(i=1;i<=100;i++){
    scanf("%d",&n);
    if(max<n){
        max = n;
        pos = i;
    }
}
printf("%d\n",max);
printf("%d\n",pos);
    return 0;
}