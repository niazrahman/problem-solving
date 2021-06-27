#include <stdio.h>
 
int main(){
int i,n=6,count = 0;
float num,sum;
for(i=1;i<=n;i++){
    scanf("%f",&num);
    if(num>0){
      sum = sum + num;
        count++;      
    }    
}
float avrg = sum/count;
printf("%d valores positivos\n",count);
printf("%.1f\n",avrg);


    return 0;
}