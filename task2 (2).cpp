#include "iostream"
using namespace std;
int main()
{
    int l, c, a[10][10], b[10][10], sum[10][10], i, j;
    cout << "Enter number of lines:\n";
    cin >> l;
    cout << "Enter number of columns:\n";
    cin >> c;
    cout << endl << "Enter numbers of first matr: " << endl;

    for(i = 0; i < l; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }

    cout << endl << "Enter elements of second matr: " << endl;
    for(i = 0; i < l; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << ": ";
            cin >> b[i][j]; }
            for(i = 0; i < l; ++i)
                for(j = 0; j < c; ++j) sum[i][j] = a[i][j] + b[i][j];
            cout << endl << "Sum of matr is: " << endl;
            for(i = 0; i < l; ++i)
                for(j = 0; j < c; ++j)
                {
                    cout << sum[i][j] << " ";
                    if(j == c - 1) cout << endl;
                }
            return 0;
}