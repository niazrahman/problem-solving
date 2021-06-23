#include <stdio.h>
 
int main() {
 
int N;
scanf("%d",&N);
int hours = N/3600;
int reminder = N%3600;
int minutes = reminder/60;
int seconds = reminder%60;
printf("%d:%d:%d\n",hours,minutes,seconds);
 
    return 0;
}