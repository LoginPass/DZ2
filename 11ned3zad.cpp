#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
    int const  n = 2;
    int const  m = 5;
    int mx[n][m], max = -1;

    fstream f;
    f.open("11ned3zad.txt", ios::out | ios::trunc);

    srand(time(NULL));

    for (int i = 0; i < m; i++)
    {
        mx[1][i] = (rand() % 3) + 1;
    }

    for (int i = 0; i < m; i++)
    {
        mx[0][i] = rand() % 100;
    }

    for (int i = m; i >= 0; i--)
    {
        if (mx[1][i] == 3)
        {
            if (mx[0][i] > max)
                max = mx[0][i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mx[i][j]<<"\t";
            f<< mx[i][j] << " ";
        }
        cout << "\n";
        f << "\n";
    }

    cout << max;
    return 0;
}
