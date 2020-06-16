#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

struct Fruits {

    string name;
    int sweetness;
    float cost ;
};

void bubbleSortsweetness(Fruits Fruitss[], int Size);
void bubbleSortcost(Fruits Fruitss[], int Size);
void showFruits(const Fruits p);
void randString(string& str);
void Cout(Fruits Fruitss[], int Size);
void File(Fruits Fruitss[], int Size);

int main() {

    int const Size = 15;
    Fruits Fruitss[Size];
    cout << "The name of Fruits\t" << "sweetness\t" << "cost\n";
    for (int i = 0; i < Size; i++)
    {
        Fruitss[i].sweetness = rand() %  10;
        Fruitss[i].cost = 60 + rand() % 500;
        randString(Fruitss[i].name);

        showFruits(Fruitss[i]);

    }

    Cout(Fruitss, Size);
    File(Fruitss, Size);


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

void showFruits(const Fruits p) {

    cout << "\t" << p.name << "\t\t\t"
        << p.sweetness << "\t\t"
        << "   " << p.cost << endl;
}

void bubbleSortcost(Fruits Fruitss[], int Size) {
    int j = 0;
    Fruits tmp;
    for (int i = 0; i < Size; i++) {
        for (int j = Size - 1; j >= i + 1; j--) {
            if (Fruitss[j].cost > Fruitss[i].cost) {
                tmp = Fruitss[i];
                Fruitss[i] = Fruitss[j];
                Fruitss[j] = tmp;
            }
        }
    }
}

void bubbleSortsweetness(Fruits Fruitss[], int Size) {
    int j = 0;
    Fruits tmp;
    for (int i = 0; i < Size; i++) {
        for (int j = Size - 1; j >= i + 1; j--) {
            if (Fruitss[j].sweetness > Fruitss[i].sweetness) {  // ñðàâíèâàåì ñîñåäíèå ýëåìåíòû
                tmp = Fruitss[i];
                Fruitss[i] = Fruitss[j];
                Fruitss[j] = tmp;
            }
        }
    }
}

void Cout(Fruits Fruitss[], int Size) {
    cout << endl << "                        Sorted sweetness > 5" << endl << endl;
    cout << "The name of Fruits\t" << "sweetness\t\t\t" << "cost\n";
    bubbleSortcost(Fruitss, Size);

    for (int i = 0; i < Size; i++)
        if (Fruitss[i].sweetness > 5) {
            showFruits(Fruitss[i]);
        }

    cout << endl << "                          Sorted cost > 400" << endl << endl;
    cout << "The name of Fruits\t" << "sweetness\t\t  " << "cost\n";
    bubbleSortsweetness(Fruitss, Size);

    for (int i = 0; i < Size; i++)
        if (Fruitss[i].cost > 400) {

            showFruits(Fruitss[i]);
        }

}

void File(Fruits Fruitss[], int Size) {
    fstream f;
    f.open("data.txt", ios::out | ios::trunc);
    f << endl << "                        Sorted cost" << endl << endl;
    f << "The name of Fruits\t" << "sweetness\t" << "cost\n";
    bubbleSortcost(Fruitss, Size);

    for (int i = 0; i < Size; i++)
        f << "\t" << Fruitss[i].name << "\t\t\t"
        << Fruitss[i].sweetness << "\t\t"
        << "   " << Fruitss[i].cost << endl;

    f << endl << "                 Sorted sweetness" << endl << endl;
    f << "The name of Fruits\t" << "sweetness\t" << "cost\n";
    bubbleSortsweetness(Fruitss, Size);

    for (int i = 0; i < Size; i++)
        if (Fruitss[i].cost > 250) {
            f << "\t" << Fruitss[i].name << "\t\t\t"
                << Fruitss[i].sweetness << "\t\t"
                << "   " << Fruitss[i].cost << endl;
        }
     f.close();
    }
