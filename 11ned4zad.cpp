#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
    fstream f;
    f.open("11ned4zad.txt", ios::out | ios::trunc);
    struct Robot
    {
        int bat;
        int speed;
        bool isUp;
    };

    int x = 0;
    int y = 0;
    int  const l = 8;

    Robot arr[l][l];

    cout << "Enter the position of the robot along the x and y coordinates, also its charge level, speed and readiness for work (1 or 0)" << endl;
    cin >> x;
    cout << endl; cin >> y;
    f << "X:" << x << endl;
    f << "Y:" << y << endl;
    x = x - 1;
    y = y - 1;
    cout << endl; cin >> arr[x][y].bat;
    cout << endl; cin >> arr[x][y].speed;
    cout << endl; cin >> arr[x][y].isUp; cout << endl;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (i == x && y == j)
            {
                arr[i][j].bat = 1;
            }
            else
            {
                arr[i][j].bat = 0;
            }
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << arr[i][j].bat;
            f << arr[i][j].bat;
        }
        cout << "\n";
        f << "\n";
    }

    cout << arr[x][y].bat << endl;
    cout << arr[x][y].speed << endl;
    cout << arr[x][y].isUp <<  endl;

    f << "Speed:" << arr[x][y].bat << endl;
    f << "Battery:" << arr[x][y].speed << endl;
    f << "isUp:" << arr[x][y].isUp << endl;
}
