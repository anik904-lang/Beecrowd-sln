#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double N1,N2,N3,N4;
    cin >>N1>>N2>>N3>>N4;
     double Media=(N1*2+N2*3+N3*4+N4*1)/10.0;
     cout<<fixed<<setprecision(1);
     cout<<"MEDIA"<<Media<<endl;

     if(Media>=7.0){
        cout<<"Aluno aprovado"<<endl;
     }else if(Media<5.0){
        cout<<"Aluno reprovado"<<endl;
     }
     else{
        cout<<"Aluno in exame"<<endl;
        double exame;
        cin>>exame;
        cout<<"Nota do exame."<<exame<<endl;
        double final_media=(Media+exame)/2.0;

        if(final_media>=5.0){
            cout<<"Aluno aprovado."<<endl;

        } else{
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media Final."<<final_media<<endl;
     }

        return 0;



}