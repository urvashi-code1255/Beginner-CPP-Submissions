using namespace std;
#include<iostream>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
