#include<stdio.h>
int main(void){
    int p_date,h,m,s;
    char a[4];
    scanf("%s%d",a,&p_date);
    scanf("%d : %d : %d",&h,&m,&s);
    int s_date,h1,m1,s1;
    char b[4];
    scanf("%s%d",b,&s_date);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    int sec,min,hr,day;
  if(s>s1&&m==m1){
         s1 +=60;
         m +=1;
        m1 += 60;
        h += 1;
        sec = s1-s;
        min = m1-m;
        hr = h1-h;
        day = s_date - p_date;
    }else if(s>s1){
        s1 +=60;
        m += 1;
        sec = s1-s;
        min = m1-m;
        hr = h1-h;
        day = s_date - p_date;
    }else{
     sec = s1-s;
        min = m1-m;
        hr = h1-h;
        day = s_date - p_date;
    }

        if(m>m1 && h1==h){
        m1 += 60;
        h += 1;
        h1 += 24;
        p_date +=1;
        sec = s1-s;
        min = m1-m;
        hr = h1-h;
        day = s_date - p_date;
    }else if(m>m1){
        m1 += 60;
        h += 1;
        sec = s1-s;
        min = m1-m;
        hr = h1-h;
        day = s_date - p_date;
    }else{
        sec = s1-s;
        min = m1-m;
        hr = h1-h;
        day = s_date - p_date;
    }

    if(h>h1){
        h1 += 24;
        p_date +=1;
        sec = s1-s;
        min = m1-m;
        hr = h1-h;
        day = s_date - p_date;
    }else{
        sec = s1-s;
        min = m1-m;
        hr = h1-h;
        day = s_date - p_date;
    }

    printf("%d dia(s)\n",day);
    printf("%d hora(s)\n",hr);
    printf("%d minuto(s)\n",min);
    printf("%d segundo(s)\n",sec);

    return 0;
}

