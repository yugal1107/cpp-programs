#include<iostream>
using namespace std;


int main(){
    string bhagwan[6] = {"ram","kanhaiya","parshuram","shiv","brahma","Lakshman"};
    cout<<bhagwan[4];
    int num[] = {12,45,14,24};
    /*In C++, you don't have to specify the size of the array. The compiler is smart enough to determine the size of the array based on the number of inserted values*/
    cout<<num[2]<<endl;
    num[2]=69;
    cout<<num[2]<<endl;
    cout<<num[4]<<endl;
    /*This is output when we go beyond array check it properly      So basically it writes any number */
    /*experimenting for each loop*/



    /*
    Learning for loop :
    for (statement 1; statement 2; statement 3) {
    // code block to be executed
    }
    
    Statement 1 is executed (one time) before the execution of the code block.

    Statement 2 defines the condition for executing the code block.

    Statement 3 is executed (every time) after the code block has been executed.
    */
    for (string i: bhagwan){//This is how we use array in fo loop in different manner.
        cout<<i<<endl;
    }
    for (int j=0;j<4;j++){
        cout<<num[j]<<endl;

    }
    /*multi-dimensional arrays */
    int numb[2][5]{
        {1,2,5,4,7},{2,4,5,7,8}
    };//yaha pata nahi kyu lekin semi colon lagana jaruri h
    cout<<numb[0][4];//7 is the output
    cout<<"Progam ended";
    return 0;
 }