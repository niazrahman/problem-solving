#include <stdio.h>
 
int main() {

    int n = 6, count=0;
    double num;
    for(int i =1;i<=n;i++){
        scanf("%lf",&num);
        if(num>0){
            count++;    
        }
    }
    printf("%d valores positivos\n",count);

    return 0;
}