#include<stdio.h>

int main(){
int a,n,sum=0,i;
scanf("%d",&a);
scanf("%d",&n);
while(1){
if(n<=0){
    scanf("%d",&n);
}else{
    for(i=a;i<n+a;i++){  
    sum = sum + i;   
}
    printf("%d\n",sum);
break;
}

}

    return 0;
}