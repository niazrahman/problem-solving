#include <stdio.h>
int main() {
    int X;
    scanf("%d",&X);
    float Y;
    scanf("%f",&Y);
    float consumption = X/Y;
    printf("%.3f km/l\n",consumption);
    return 0;
}