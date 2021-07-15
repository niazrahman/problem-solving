#include<stdio.h>

int main(){
int n,x,y,i,j,sum=0,tem;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d %d",&x,&y);
    if(x>y){
        tem=x;
        x=y;
        y=tem;
    }
 if(x%2!=0){
     for(j=x+1;j<y;j++){
         if(j%2!=0){
             sum=sum+j;
         }
     }
 } else{
     for(j=x;j<y;j++){
        if(j%2!=0){
             sum= sum+j;
        }
     
     }
   
 }
    printf("%d\n",sum);
   sum=0;
}
 
    return 0;
}