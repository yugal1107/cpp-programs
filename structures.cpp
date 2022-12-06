#include<iostream>
using namespace std;

int main(){

    //Use the "struct" keyword and declare each of its members inside curly braces.
    // Making structure of Roomies 




    /*  INCOMPLLETE PROGRAM :
    struct {
        string sName[3];
        string sBranch[3];
        string sFName[3];
        string sMName[3];
    } r7503,r7504,r7502;  //We can call this as structure in multiple variable.

    cout << "Enter the details of Room No. 7503 : "<< endl;
    cout << "Enter the details of a student in order : Name, Branch, Father's Name, Mother's Name"<<endl;
    for (int i=0; i<3; i++){
         cout<<"Enter Details of Student 1"<<endl;  
         cin>>r7503.sName[i];
         cin>>r7503.sBranch[i];
         cin>>r7503.sFName[i];
         cin>>r7503.sMName[i];
    }
    */




    /*
    By giving a name to the structure, you can treat it as a DATA TYPE. This means that you can create variables with this structure anywhere in the program at any time.

    To create a named structure, put the name of the structure right after the struct keyword:
    */

    struct student{
        string sName;
        string sBranch;
        string sTown;
    };
    student s1; //As we can consider student name of structue as datatype.
    s1.sName = "Yugal Burde";
    s1.sBranch = "CSE";
    s1.sTown = "Indore";

    student s2;
    s2.sName = "Himanshu Jha";
    s2.sBranch = "AIMlL";
    s2.sTown = "Bhopal";

    student s3;
    s3.sName = "Yuvraj Yadav";
    s3.sBranch = "AIDS";
    s3.sTown = "Khargone";

    student s4;
    s4.sName = "Tejaswa Jhode";
    s4.sBranch = "ITIOT";
    s4.sTown = "Balaghat";

    cout << s1.sName <<endl<< s2.sName <<endl<< s3.sName <<endl<< s4.sName;

    return 0;
}
