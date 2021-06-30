#include <stdio.h>
 
int main() {
 
    float a,b,c,d,productOfNumAndWeight=0.0,sumOfWeight=0.0,avrg=0.0;
    float w = 2.0,x=3.0,y=4.0,z=1.0;
    scanf("%f %f %f %f",&a, &b, &c, &d);
    productOfNumAndWeight = (a*w)+(b*x)+(c*y)+(d*z); 
    sumOfWeight = w+x+y+z;
    avrg = productOfNumAndWeight/sumOfWeight;
    printf("Media: %.1f\n",avrg);
    if(avrg>=7.0){
        printf("Aluno aprovado.\n");
    }else if(avrg>=5.0 && avrg<=6.9){
        printf("Aluno em exame.\n");
            float xm,newAvrg;
           scanf("%f",&xm);
           printf("Nota do exame: %.1f\n",xm);
           newAvrg = (xm + avrg)/2;
           if(newAvrg>=5.0){
           printf("Aluno aprovado.\n");
    }else{
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n",newAvrg); 
    }else{
        printf("Aluno reprovado.\n");
    }
   
    return 0;
}