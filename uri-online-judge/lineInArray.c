#include<stdio.h>

int main(){
float arr[12][12];
int i,j;
float n;
int row;
char ch;
scanf("%d %c",&row ,&ch);
for(i=0;i<=11;i++){
    for(j=0;j<=11;j++){
        scanf("%f",&n);
        arr[i][j] = n;
    }
}
float sum=0.0,avrg;
for(j=0;j<=11;j++){
    sum = sum+arr[row][j];
}
avrg = (float)sum/12.0;
if(ch=='S'){
    printf("%.1f\n",sum);
}else{
    printf("%.1f\n",avrg);
}

    return 0;
}