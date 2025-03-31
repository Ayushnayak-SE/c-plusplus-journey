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
    //a>b and b>c then a>c automatically and hence a is greatest
    if(a>b){  //b can never be greatest
        if(a>c){ 
        cout<<a<<"is greatest";
        }
        else{    //c>a
            cout<<c<<"is greatest";
        }
    }    
    else {      //b>a
        if(b>c){
        cout<<b<<"is geatest";
    }
    else{ //c>b , b>a --c>a
        cout<<c<<" is greatest";
    }
}
}