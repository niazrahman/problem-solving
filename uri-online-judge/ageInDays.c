#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int year = n/365;
    int remain = n%365;
    int month = remain/30;
    int days = remain%30
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",days);
    return 0;
}