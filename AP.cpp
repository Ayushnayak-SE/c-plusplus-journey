#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of a :";
    cin>>n;
    for(int i=1; i<=2*(n)-1 ; i+=2){   //put first term , last term and increment value . calculate these all through formula.
        cout<<i<<"  ";
    }
}