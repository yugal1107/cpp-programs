#include<iostream>
using namespace std;


int main(){
    string bhagwan[6] = {"ram","kanhaiya","parshuram","shiv","brahma","Lakshman"};
    cout<<bhagwan[4];
    int num[] = {12,45,14,24};
    /*In C++, you don't have to specify the size of the array. The compiler is smart enough to determine the size of the array based on the number of inserted values*/
    cout<<num[2];
    num[2]=69;
    cout<<num[2];
    cout<<num[4];/*This is output when we go beyond array check it properly      So basically it writes any number */
    /*experimenting for each loop*/
    for (string i: bhagwan){
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