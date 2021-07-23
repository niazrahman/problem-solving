#include<stdio.h>
#include<string.h>

int main(){
    char s[1000];
    scanf("%s",s);
    int count = 0;
    for(int i = 0; i<strlen(s);i+=3){
        if(s[i]!='S'){
            count++;    
        }
        if(s[i+1]!='O'){
            count++;  
        }
        if(s[i+2]!='S'){
            count++;   
        }
    }
    if(count>0){
        printf("%d\n",count);
    }else{
        printf("0\n");
    }

    return 0;
}
