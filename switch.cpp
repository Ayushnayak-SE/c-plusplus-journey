#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter value of a :";
    cin>>a;
    cout<<"enter value of b :";
    cin>>b;
    cout<<"enter operator :";
    cin>>op;
    switch(op){
        case '+' :
        cout<<"value is :"<<a+b;
        break;
        case '-' :
        cout<<"value is :"<<a-b;
        break;
        case '*' :
        cout<<"value is :"<<a*b;
        break;
        case '/' :
        cout<<"value is :"<<a/b;
        break;
        default:
        cout<<"invalid";
    }
}