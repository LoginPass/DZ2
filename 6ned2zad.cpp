#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>


int newar1, newar;
float sum;


int main() {

    const int n = 20;
    int array[n];

    srand(time(NULL));

    for (int i = 0; i < n; i++) {

        array[i] = rand() % 20 - 10;
        std::cout <<" \t(" << array[i]<< ") \t";

        if (array[i] > 0) {
            array[i] = array[i] - 1;
            newar = array[i];
            std::cout<<" \t<{ " << newar << " }> \t"<<std::endl;
        }
        else {
            array[i] = array[i] + 5;
            newar1 = array[i];
            std::cout <<" \t*[ " <<newar1 << " ]* \t"<<std::endl;
        }

    }

    std::cout << std::endl;;


    getchar();
    getchar();

    return 0;
}
