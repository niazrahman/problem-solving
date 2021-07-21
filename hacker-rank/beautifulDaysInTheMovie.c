#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b,c;
int count = 0;
int i;
scanf("%d %d %d",&a ,&b ,&c);
for(i = a; i<=b;i++){
   
   int l = i,rev = 0;    
   while (l != 0) {
        
        rev = (rev * 10) + l%10;
        l = l/ 10;
    }
  if(abs(rev-i)%c==0){
      count++;
  }
}
printf("%d\n",count);
    return 0;
}
  
