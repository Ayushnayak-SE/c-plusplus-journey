#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a value :";
    cin>>n;
    if((n%5 == 0 or n%3 == 0) and (n%15 != 0))
    cout<<"It is divisible by 5 or divisible by 3 but not divisible by 15 ";
    else
    cout<<"Failed";
    
}