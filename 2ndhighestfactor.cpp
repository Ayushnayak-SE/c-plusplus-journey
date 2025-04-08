#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n :";
    cin>>n;
    for(int i=n/2; i>=1 ; i--){   //2nd highest factor is found , because loop is reverse and n/2 helps to find 2nd highest one
        if(n%i==0){   
            cout<<i<<" ";
            break;   //it will terminate the loop immediately
        }
    }
}