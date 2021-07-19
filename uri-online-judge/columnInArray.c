#include<stdio.h>
int main(){

float arr[12][12];
int i,j;
float n;
int col;
char ch;
scanf("%d %s",&col,&ch);
for(i=0;i<12;i++){
    for(j=0;j<12;j++){
        scanf("%f",&n);
        arr[i][j] = n;
    }
}
float sum = 0,avg;
for(i=0;i<12;i++){
    sum = sum+arr[i][col];
}
avg = (float)sum/12.0;
if(ch=='S'){
    printf("%.1f\n",sum);
}else{
    printf("%.1f\n",avg);
}
    return 0;
}