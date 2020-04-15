#include <iostream> //Сгенерировать массив со случайными числами в диапазонe [-10;20]
#include <stdlib.h>
const int n = 30;


int main()
{
    int arrA[n];
    int arrB[n];
   srand(2);
    for(int i=0; i<n; i++){
        arrA[i] = rand() % -10;
        arrB[i] = rand() % 20;

    }


    for(int i=0; i<n; i++)
        std::cout << arrA[i] << " " << arrB[i] << std::endl;
    std::cin.get();
    std::cin.get();
    return 0;
}
