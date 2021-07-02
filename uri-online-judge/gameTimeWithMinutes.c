#include <stdio.h>
 
int main() {
 
    int h,m,h1,m1,min,hr;
    scanf("%d %d %d %d",&h,&m,&h1, &m1);

        if(m>m1 && h1==h){
        m1 += 60;
        h += 1;
        h1 += 24;
        min = m1-m;
        hr = h1-h;
   
    }else if(m>m1){
        m1 += 60;
        h += 1;
        min = m1-m;
        hr = h1-h;

    }else{
        min = m1-m;
        hr = h1-h;
    }

    if(h>h1){
        h1 += 24;
        min = m1-m;
        hr = h1-h;
    }else{
        min = m1-m;
        hr = h1-h;
    }
    if(h==h1 && m==m1){
        h1 += 24;
        min=m1-m;
        hr = h1-h;
    }
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hr,min);
 
    return 0;
}