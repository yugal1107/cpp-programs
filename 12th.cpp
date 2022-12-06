#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                cout<<i<<"is not a prime number "<<endl;
                
                break;

            }
             else if (i==j+1){
                cout<<i<<"is a prime number."<<endl;
            }
        }
        
    }
    return 0;
}