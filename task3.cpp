#include <iostream>
using namespace std;

int main ()
{
    char A [3][3] =
            {
                    { '2', '3', '1' },
                    { '5', '4', '1' },
                    { '6', '7', '8' }
            };

    cout << "matrix  " << endl ;

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
            cout << A[i][j]<<" ";
        cout << endl;
    }

    cout << endl << "transposed  " << endl ;


    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
            cout << A[j][i]<<" ";
        cout << endl;
    }
}
