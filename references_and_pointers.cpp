#include<iostream>
using namespace std;

int main(){
    //Write your cpp code here
    string food = "Pizza"; // A food variable of type string

    cout << food;  // Outputs the value of food (Pizza)
    cout << &food; // Outputs the memory address of food (like : 0x6d45)


    //trying second time
    cout << "\n\n\n\n" ;
    int num1 = 54;
    int *pt = &num1;
    cout << num1 << endl ;
    cout << pt << endl; // Prints address of num1
    cout << *pt << endl;// Prints value of num1 i.e. 54
    cout << &num1;// Prints address of num1
    return 0;
}