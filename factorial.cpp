#include<iostream>
using namespace std;

int main(){
    /*Program to find factorial of a no.*/
    int a,prod=1;
    cout<<"Write the integer of which you want to find factorial:"<<endl;
    cin>>a;
    for (int i=1; i<=a ;i++){
        prod=prod*i;
    }
    cout<<"The Factorial of the no. is "<<prod;

    return 0;
}