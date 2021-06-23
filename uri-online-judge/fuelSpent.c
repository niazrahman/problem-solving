#include <stdio.h>
 
int main() {
 
 int spent_time,avg_speed;
 scanf("%d %d",&spent_time,&avg_speed);
 float total_fuel = (float)(spent_time*avg_speed)/12;
 printf("%.3f\n",total_fuel);
 
    return 0;
}