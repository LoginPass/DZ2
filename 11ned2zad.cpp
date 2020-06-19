#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;
int   main()
{
    fstream f;
    f.open("11ned2zad.txt", ios::out | ios::trunc);

    int const  n = 5;
    int mx[n][n];
    int arr[n];

    srand(time(NULL));

    int min = 256;
    int str = 0;

    int max = mx[0][0];

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
            if (mx[i][j] > max)
            {
                max = mx[i][j];
            }
            arr[i] = max;
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mx[i][j]<<" ";
            f<< mx[i][j] << " ";
        }
        cout << "\n";
        f << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        f << arr[i] << " ";
    }



}
