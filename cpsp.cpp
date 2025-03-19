#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter cost price :";
    cin>>cp;
    cout<<"enter selling price :";
    cin>>sp;
    if(cp>sp) //condition for loss
    cout<<"there is a loss of :"<<cp-sp;
    if (sp>cp)  //condition for profit
    cout<<"there is a profit of :"<<sp-cp;
    else     //condition for breakeven
    cout<<"there is no profit no loss";
}