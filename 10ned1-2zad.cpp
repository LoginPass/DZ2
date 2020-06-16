#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <string>

using namespace std;


void mp3Reader(string fname){
    ifstream file;

    file.open(fname);
    if (!file.is_open()) {
        cout << "Error open: " << fname << endl;
        file.close();
        return;
    }

    unsigned char b2[2];
    unsigned char b3;
    unsigned char b4;

    cout << "----------------- Read First MP3 Header in file without ID3v2----------------- \n";
    file.read((char*)b2, sizeof(b2));
    file.read((char*)&b3, sizeof(char));
    file.read((char*)&b4, sizeof(char));
    file.close();

    cout << fname << endl << "Signature: " << hex << showbase << endl
         << (int) b2[0] << endl
         << (int) b2[1] << endl
         << (int) b3 << endl
         << (int) b4 << endl;

    cout << endl;
}

void readMp3Id3v1(string fname){
    ifstream file;

    file.open(fname);
    if (!file.is_open()) {
        cout << "Error open: " << fname << endl;
        file.close();
        return;
    }


    cout << "----------------- Read First MP3 Header in file without ID3v2----------------- \n";

    file.close();

    cout << endl;
}

int main(){

    mp3Reader("./data_samples/1.mp3");
    mp3Reader("./data_samples/2.mp3");
    mp3Reader("./data_samples/3.mp3");

    readMp3Id3v1("./data_samples/1.mp3");

    cin.get();
    cin.get();
    return 0;
}
