#include <stdio.h>
 
int main() {
 
 int n,i,j,p;
 int rest = 2;
  scanf("%d",&n);
  printf("%d\n",rest);
 if(n>1 && n<10000){
      for(i=1;i<10000;i++){
     for(j=n;j<=n;j++){
         p = i/j;
         if(i+rest>=10000){
             break;
         }else if(i%j==0){
             printf("%d\n",i+rest);
         }
        }
    }  
}
 
 
    return 0;
}