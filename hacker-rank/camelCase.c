#include<stdio.h>
#include<string.h>

int main(){
    char s[100000];
    scanf("%s",s);
    int count = 1;
    for(int i = 0; i<strlen(s);i++){
        if(s[i]>=65 && s[i]<=90){
            count++;
        }
    }
printf("%d\n",count);
    return 0;
}
