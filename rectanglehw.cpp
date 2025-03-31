#include<iostream>
using namespace std;
int main(){
    int L,B,a,p;
    cout<<"enter the value of L :";
    cin>>L;
    cout<<"enter the value of B :";
    cin>>B;
    a = L*B;
    p = 2*(L+B);
    if (a>p)
    cout<<"area is greater than perimeter";
    if(a<p)
    cout<<"perimeter is greater than area";

}