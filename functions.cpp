#include<iostream>
using namespace std;
//declaring function without having parameter and function should be defined outside main function.
void raju() {                     
        cout << "Hello I am Raju Rastogi..."<< endl;
}

// declaring a function with argument in  which we can give input.
void tejas(string sName, int sYear) {
    cout << "The student name is " << sName << "and he is currently studing in " << sYear << " year of college."<<endl;
} 

// Declaring a function with default parameter i.e. if no parameter in specified at the time of calling the ///function, then the default parameter will be considered.
//INTRODUCING RETURN KEYWORD-
//The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void, and use the return keyword inside the function:

int yugal(int x){
    return x;

}
//NOTE : return is not same as cout.


// Passing arrays into a function.
//Note that function will only be checked by the compiler when it is called. It will not declare names as an array here, so we have to mention the array datatype while defining it in the main function. 
string myfunc(string names[5],int num[4]){
    cout << names[2] << names[4] << num[1] << num[3];
}
    
//Function oveloading is having more than ane functions with different types of paramters. Jst we have to make two functions with different type like one with float and one with int and etc.


int main(){
    //Write your cpp code here
    
    /raju(); //calling of the function 
    raju();


    string n;
    int y;
    cin>> n >> y;
    tejas(n,y);


    cout << yugal(4);


    string names[5] = {"Akash", "Amber", "Vaibhav" , "Yash" , "Sanidhya"};
    int num[4] = {45 , 69 , 54 , 57};
    myfunc(names, num);



    return 0;
}