#include<stdio.h>

int main(){
    int i,j,n,num,count=0;
        scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        for(j=1;j<=num;j++){
            if(num%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d eh primo\n",num);
        }else{
            printf("%d nao eh primo\n",num);
        }
        count = 0;
    }

    return 0;
}