// *********
//  *******
//   *****
//    ***
//     *
// space star space
//n=5 
// 0 row(0,9,0)
// 1 row(1,7,1)
// 2 row(2,5,2)
// 3 row(3,3,3)
// 4 row(4,1,4)
#include<iostream>
using namespace std;
void print8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-2*i-1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    print8(10);
    return 0;
}