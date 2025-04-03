#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    cout<<"Enter value of c :";
    cin>>c;
    if((a+b) > c and (b+c) > a and (c+a) > b)
    cout<<"it is the sides of a triangle";
    else
    cout<<"it is not the sides of traingle ";
}