#include<stdio.h>
#include<math.h>

int main(){

int n;
scanf("%d",&n);
int t,res = 0;

for(int i = 1; i<=n;i++){
    scanf("%d\n",&t);
    for(int j = 0; j<=t;j++){
        if(j==0){
            res = 1;
        }
        else 
        if(j%2!=0){
            res = res * 2;
        }
        else 
        if(j%2==0){
            res = res + 1;
        }
    }
    printf("%d\n",res);
}


    return 0;
}
