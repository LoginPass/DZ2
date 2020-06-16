#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

struct Plane {

    string brand;
    int NumberOfPassengers;
    float Speed;
};

void bubbleSortNumberOfPassengers(Plane planes[], int Size);
void bubbleSortSpeed(Plane planes[], int Size);
void showPlane(const Plane p);
void randString(string& str);
void Cout(Plane planes[], int Size);
void File(Plane planes[], int Size);

int main() {

    int const Size = 15;
    Plane planes[Size];
    cout << "The brand of plane\t" << "Number Of Passengers\t" << "Max speed\n";
    for (int i = 0; i < Size; i++)
    {
        planes[i].NumberOfPassengers = 80 + rand() % 150;
        planes[i].Speed = 725 + rand() % 250;
        randString(planes[i].brand);

        showPlane(planes[i]);

    }

    Cout(planes , Size);
    File(planes, Size);

    return 0;
}



void randString(string& str) {
    static const char alphabet[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    str = "     ";


    for (int i = 0; i < str.length(); i++) {
        int r = rand() % (sizeof(alphabet) - 1);
        str[i] = alphabet[r];
    }
    str[str.length()] = 0;
}

void showPlane(const Plane p) {

    cout << "\t" << p.brand << "\t\t\t"
        << p.NumberOfPassengers << "\t\t"
        << "   " << p.Speed << endl;
}

void bubbleSortSpeed(Plane planes[], int Size) {
    int j = 0;
    Plane tmp;
    for (int i = 0; i < Size; i++) {
        for (int j = Size - 1; j >= i + 1; j--) {
            if (planes[j].Speed > planes[i].Speed) {
                tmp = planes[i];
                planes[i] = planes[j];
                planes[j] = tmp;
            }
        }
    }
}

void bubbleSortNumberOfPassengers(Plane planes[], int Size) {
    int j = 0;
    Plane tmp;
    for (int i = 0; i < Size; i++) {
        for (int j = Size - 1; j >= i + 1; j--) {
            if (planes[j].NumberOfPassengers > planes[i].NumberOfPassengers) {
                tmp = planes[i];
                planes[i] = planes[j];
                planes[j] = tmp;
            }
        }
    }
}

void Cout(Plane planes[], int Size) {
    cout << endl << "                        Sorted Max Speed" << endl << endl;
    cout << "The brand of plane\t" << "Number Of Passengers\t" << "Max speed\n";
    bubbleSortSpeed(planes, Size);

    for (int i = 0; i < Size; i++)
        showPlane(planes[i]);

    cout << endl << "                 Sorted Number Of Passengers" << endl << endl;
    cout << "The brand of plane\t" << "Number Of Passengers\t" << "Max speed\n";
    bubbleSortNumberOfPassengers(planes, Size);

    for (int i = 0; i < Size; i++)
        showPlane(planes[i]);
}

void File(Plane planes[], int Size) {
    fstream f;
    f.open("data.txt", ios::out | ios::trunc);
    f << endl << "                        Sorted Max Speed" << endl << endl;
    f << "The brand of plane\t" << "Number Of Passengers\t" << "Max speed\n";
    bubbleSortSpeed(planes, Size);

    for (int i = 0; i < Size; i++)
        f << "\t" << planes[i].brand << "\t\t\t"
        << planes[i].NumberOfPassengers << "\t\t"
        << "   " << planes[i].Speed << endl;

    f << endl << "                 Sorted Number Of Passengers" << endl << endl;
    f << "The brand of plane\t" << "Number Of Passengers\t" << "Max speed\n";
    bubbleSortNumberOfPassengers(planes, Size);

    for (int i = 0; i < Size; i++)
        f << "\t" << planes[i].brand << "\t\t\t"
        << planes[i].NumberOfPassengers << "\t\t"
        << "   " << planes[i].Speed << endl;
    f.close();
}
