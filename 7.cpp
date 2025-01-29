//     *
//    ***
//   *****
//  *******
// *********
//n=5
//space star star
//0th row--> 4 space 1 star 4 space
//1st row--> 3 space 3 star 3 space
//2nd row--> 2 space 5 star 2 space
//3rd row--> 1 space 7 star 1 space
//4th row--> 0 space 9 star 0 space
#include<iostream>
using namespace std;
void print7(int n)
{
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
}
int main()
{
    print7(5);
    return 0;
}