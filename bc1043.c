#include<stdio.h>
int main(){
    double A,B,C;
    scanf("%lf%lf%lf",&A,&B,&C);

    if(A+B>C && B+C>A && A+C>B){
        double perimeter=A+B+C;
        printf("Perimeter = %.1lf\n",perimeter);
    }else{
        double area=((A+B)*C)/2.0;
         printf("Area = %.1lf\n",area);
    }
    return 0;
}