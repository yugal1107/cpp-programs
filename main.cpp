#include<iostream>
#include "prime_check_function.h"
using namespace std;



int main(){
    //Write your cpp code here
    int n1,n2,x;
    cout<<"Enter two natural numbers : ";
    cin>>n1>>n2;
    if (n1>n2){
        x=n1-n2;
        n1=n2;
        n2=n2+x;
    }    
    for (int i=n1; i<=n2; i++){
        prime(i);
        cout<<endl;
    }
    return 0;
}
