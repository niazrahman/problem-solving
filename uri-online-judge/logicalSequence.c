#include<stdio.h>

int main (){
int n,i,j;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=3;j++){
        if(j==2){
            printf("%d %d %d\n",i,i*i,i*i*i);
        }else if(j==3){
            printf("%d %d %d\n",i,i*i+1,i*i*i+1);
        }
    }
}
    return 0;
}