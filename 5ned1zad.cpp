#include <iostream>

using namespace std;

int main()
{
    const int n = 30;
    int arr[n];
    for(int i=0; i<n; i++)
           arr[i] = rand() % 31 - 10;

       for(int i=0; i<n; i++)
           std::cout << arr[i] << ", ";


       std::cout << std::endl;
 return 0;
}
