#include <iostream>

using namespace std;

int result=1;

int main(){

   const int n = 4;

   float arr[n];

   for(int i=0; i<n; i++)
       std::cin >> arr[i];

    for(int i=0; i<n; i++)
        if(arr[i]<0){
        result *= arr[i];
        }
    for(int i=0; i<n; i++)
        if(arr[i]>0){
            result *= arr[i];
        }
 std::cout << "Result" <<result;

   std::cin.get();
   std::cin.get();

   return 0;
}
