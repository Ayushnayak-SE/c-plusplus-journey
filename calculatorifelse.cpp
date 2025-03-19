#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char ch;
    cout<<"enter value of n1 :";
    cin>>n1;
    cout<<"enter value of n2 :";
    cin>>n2;
    cout<<"enter character :";
    cin>>ch;
    if(ch == '+')
    cout<<"value ="<<n1+n2;
    if(ch == '-' )
    cout<<"value ="<<n1-n2;
    if(ch == '*')
    cout<<"value :"<<n1*n2;
    if(ch == '/')
    cout<<"value :"<<n1/n2;
    }