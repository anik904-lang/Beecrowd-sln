#include<stdio.h>
int main(){
    double N1,N2,N3,N4;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);

    double Media=(N1*2+N2*3+N3*4+N4*1)/10.0;
    printf("Media:%.1lf",Media);
    if(Media>=7.0){
        printf("Aluno de aprovado. %.1lf",Media);

    } else if(Media<5.0){
        printf("Aluno de reprovado. %.1lf",Media);
    }
    else{
        printf("Aluno in exame. %.1lf",Media);
    }

    double exame;
    scanf("%lf",&exame);
    double final_media= (Media+exame)/2.0;

    if(final_media >=5.0){
      printf("Aluno aprovado. %.1lf",final_media);
    }else{
        printf("Aluno reprovado. %.1lf",final_media);
    }

    printf("Media final: %.1lf", final_media);
    return 0;
}