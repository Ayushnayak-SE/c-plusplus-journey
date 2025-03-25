#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter value of a :";
    cin>>a;
    cout<<"enter value of b :";
    cin>>b;
    cout<<"enter value of c :";
    cin>>c;
    if(a>b and b>c)
    cout<<"largest value is :"<<a<<endl;
    if(b>a and b>c)
    cout<<"largest value is :"<<b;
    else
    cout<<"largest value is :"<<c;

    
}