#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;
int main()
{
    fstream f;
    f.open("11ned1zad.txt", ios::out | ios::trunc);

    int const  n = 5;
    int mx[n][n];

    srand(time(NULL));

    int min = 256;
    int str = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mx[i][j] = rand() % (min-1);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mx[i][j] < min)
            {
                min = mx[i][j];
                str = i;
            }

        }
    }


    for (int i = 0; i < n; i++)
    {
        mx[str][i] = 0;
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << mx[i][j]<<" ";
            f<< mx[i][j] << " ";
        }
        cout << "\n";
    }
    f << min;
    cout << min;
    f.close();


}
