#include<iostream>
using namespace std;

void prime(int x){
    int flag=0;
    for (int i=1; i<x ; i++){
        if(x%i==0){
            flag++;
        }
        if(flag==2){
            cout << x << " is not a prime number.";
            break;
        }
        if(flag==1 && x==i+1){
            cout << x << " is a prime number.";
        }
    }
}
