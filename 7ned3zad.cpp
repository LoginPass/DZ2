#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void insertionSort(float arr[], int len);

int main(){
ofstream file;
int min = -200;
int max = 300;
const unsigned int n = 10000;
float arr[n];

    for( unsigned int i=0; i<n; i++){
         arr[i] = rand() % (max-min+1)+min;
         std::cout << arr[i] << " ";
    }
std::cout << endl << "    " << endl;

return 0;
}
