#include<stdio.h>
int main(){
int i,N;
int first=0,second=1,third;

scanf("%d",&N);
printf("%d ",first);
printf("%d ",second);

for(i=2;i<N;i++){
    
    third = first+second;
    first = second;
    second = third;
    if(i==N-1){
        printf("%d",second);
        
    }else{
        printf("%d ",second);
    }

}
    printf("\n");
    return 0;
}