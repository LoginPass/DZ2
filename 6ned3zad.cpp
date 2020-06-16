#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int *arr, n, i;
    std::cout << "Enter size of array: ";
    std::cin >> n;
    arr = new int[n];
    for (i = 0; i < n; i++)
    {
        std::cout << i << ": ";
        std::cin >> arr[i];
    }
    int c, counter = 0;
    std::cout << "Enter c: ";
    std::cin >> c;
    for (i = 0; i < n; i++)
    if (arr[i] > c)
        counter++;
   std::cout << "Elements > c: " << counter;
   return 0;
}
