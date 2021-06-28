#include <stdio.h>
 
int main() {
 
    int n = 5, count=0,num;
    for(int i =1;i<=n;i++){
        scanf("%d",&num);
          if(num % 2 == 0){
            count++;    
        }       
    }
    printf("%d valores pares\n",count);
 
    return 0;
}