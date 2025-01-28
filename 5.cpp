// *****
// ****
// ***
// **
// *
// 1-5
// 2-4
// 3-3
// 4-2
// 5-1
//n=5 n-i+1
#include<iostream>
using namespace std;
void print5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print5diffapproach(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    print5(5);
    print5diffapproach(5);
    return 0;
}