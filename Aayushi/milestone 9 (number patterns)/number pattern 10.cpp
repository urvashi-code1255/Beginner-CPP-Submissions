#include<iostream>
using namespace std;
int main()
{
    int rows, i, j;
    cout<<"enter number of rows : ";
    cin>>rows;

    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=rows-i+1; j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}
