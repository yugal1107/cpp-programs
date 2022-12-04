#include<iostream>
using namespace std;

int main(){ 
    int op;
    cout<<"Hello, This is me Yugal Burde \n Welcome To The YugalCalculator \n\n Choose your operation by entering the number of operation:\n1. Addition\n2. Substraction(x-y)\n3. Multiplication\n4. Division(First/Second)\n";
    cin >> op;
    cout<<"Enter first Number:";
    double x,y;
    cin >> x;
    cout << "Enter second Number:";
    cin >> y;
    if (op==1){
        cout<<"The sum of two numbers is:"<<x+y;
    }
    if (op==2){
        cout<<"The substraction product of two numbers is :"<<x-y;
    }
    if (op==3){
        cout<<"The product of the given two numbers is :"<<x*y;
    }
    if (op==4){
        cout<<"The division of two numbers gives us :"<<x/y;
    }
    


    //this is a comment
    
    return 0;
}
