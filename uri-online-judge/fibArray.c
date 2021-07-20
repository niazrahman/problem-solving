
#include<stdio.h>

int main(void){
     int n,i,j,num;;
     long long int arr[60];
    scanf("%d",&n);
    arr[0] = 0;
    arr[1] = 1;

    for(i=2;i<=60;i++){    
    
    arr[i] = arr[i-1]+arr[i-2];
               
    } 
         for(j=0;j<n;j++){
        scanf("%d",&num);
        printf("Fib(%d) = %lld\n",num,arr[num]);
    } 

    return 0; 
}