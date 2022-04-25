#include "iostream"
using namespace std;

int main()
{

    int str, stlb, a[10][10], b[10][10], sum[10][10], i, j;
    cout << "Введите количество строк"<<endl;
    cin >> str;
    cout << "Введите количество столбцов"<<endl;
    cin >> stlb;

    for(i = 0; i < str; ++i)
        for(j = 0; j < stlb; ++j)
        {
            cout << "a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }


    for(i = 0; i < str; ++i)
        for(j = 0; j < stlb; ++j)
        {
            cout << "b" << i + 1 << j + 1 << ": ";
            cin >> b[i][j]; }
            for(i = 0; i < str; ++i)
                for(j = 0; j < stlb; ++j) sum[i][j] = a[i][j] + b[i][j];
            cout << endl << "Сумма: " << endl;
            for(i = 0; i <str; ++i)
                for(j = 0; j < stlb; ++j)
                {
                    cout << sum[i][j] << " ";
                    if(j == stlb - 1) cout << endl;
                }
            return 0;
}