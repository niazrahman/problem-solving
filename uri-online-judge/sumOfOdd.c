#include<stdio.h>

int main(){
int n,x,y,i,j,sum=0,count=0;

scanf("%d",&n);

for(i=1;i<=n;i++){
  
    while(scanf("%d %d",&x,&y)){
        for(j=x;j<=x+((y*2)-1);j++){
            if(j%2!=0){
                sum=sum+j;
            }
        }
        printf("%d\n",sum);
        sum=0;
        break;
    }
   
}
    return 0;
}