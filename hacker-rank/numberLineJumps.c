#include <stdio.h>



int main()
{
    int x1, v1, x2, v2 , t;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    
    if(x1>x2){
        t = x1;
        x1 = x2;
        x2 = t;
        t = v1;
        v1 = v2;
        v2 = t;
    }

    while(x1<x2){
            x1 += v1;
            x2 += v2;
        
    }
    if(x1 == x2){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
   

    return 0;
}
