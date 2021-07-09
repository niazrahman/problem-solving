#include<stdio.h>

int main(){
    int count=0,n,sum=0;
    while(1){
        scanf("%d",&n);
        if(n<0){
            break;
        }else{
            sum=sum+n;
        }
        count++;
    }
    float avrg = (float)sum/count;
    printf("%.2f\n",avrg);

    return 0;
}