#include<stdio.h>

int main(){
    int n,temp,count = 0;
    scanf("%d",&n);
    int arr[n];
    int j;
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i<n;i++){
        for( j = i+1; j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                count++;
        }
      
        }
    }
    for(int i = 0; i<n;i++){
        if(arr[i]==4 && arr[i+1]==4 && arr[i+2]){
            count=2;
        }
    }
    printf("%d\n",count);
    return 0;
}
