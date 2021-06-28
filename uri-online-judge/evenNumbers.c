#include <stdio.h>
 
int main() {
int n=100,i;
for(i=1;i<=100;i++){
    if(i%2 ==0){
        n=n+i;
        printf("%d\n",i);
    }
}

    return 0;
}