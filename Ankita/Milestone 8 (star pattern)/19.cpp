#include <iostream>
using namespace std;
int main ()
{
    int i, j ;
    char k = 'A';
    for (i = 1; i <= 4; i++)
    {
        k = 'A';
        for (j = 1; j <= 7; j++)
        {
            if (j > (4-i) && j < (4+i))
            {
                if (j < 4)
                {
                    cout << k;
                    k++;
                }
                else if (j >= 4)
                {
                    cout << k;
                    k--;
                }
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
}
