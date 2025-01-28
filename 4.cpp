// 1
// 22
// 333
// 4444
// 55555
//her we are printing the row number in the rows(outer loop)
#include<iostream>
using namespace std;
void print4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
int main()
{
    print4(5);
    return 0;
}