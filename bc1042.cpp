#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b && b>c){
        cout<<c<<" "<<b<<" "<<a<<endl;
    }else if(a>c && b<c){
        cout<<b<<" "<<c<<" "<<a<<endl;
    }else if(b>c && a<c){
        cout<<a<<" "<< c<<" "<<b<<endl;
    }else if(b>a && b<c){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }else if(a>c && a<b){
        cout<<c<<" "<<a<<" "<<b<<endl;
    }else{
        cout<<b<<" "<<a<<" "<<c<<endl;
    }
    return 0;
}