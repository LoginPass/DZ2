#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void selectionSort(float arr[], int len);
void bubbleSort(float arr[], int len);

int main(){
ofstream file;

int min = -70;
int max = 50;
const unsigned int n = 10000;
float arr[n];

    for( unsigned int i=0; i<n; i++){
         arr[i] = rand() % (max-min+1)+min;
         std::cout << arr[i] << " ";
    }




    for( unsigned int i=0; i<n; i++){
         std::cout << arr[i] << " ";
    }

return 0;
}

void insertionSort(float arr[], int len) {
    float key = 0;
    int j = 0;
    // проход по массиву
    for(int i = 1; i<len; i++){
        key = arr[i];  // ключевой/текущий элемент
        j = i - 1;
        // перестановка элемента на нужное место
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
            arr[j+1] = key;
        }
    }
}


void bubbleSort(float arr[], int len) {
    int per = 0;
    float tmp = 0;
    // идём по массиву
    for(int i = 0; i<len; i++){
        // делаем проверки в оставшейся части массива
        for(int j = len-1; j >= i+1; j--){
            if(arr[j] < arr[j-1]){  // сравниваем соседние элементы
                // делаем перестановку
                tmp = arr[j];
                arr[j] =arr[j-1];
                arr[j-1] = tmp;
                per = per + 1;

            }
        }
    }
std::cout << " Perest = " << per << endl;
}
