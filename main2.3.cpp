#include <iostream> //Вычислить сумму элементов массива, больших 7
#include <stdlib.h>


int main()
{
   const int n = 15;
   int arr[n],k=0;


   srand(2547);

   for(int i=0; i<n; i++)
       arr[i] = rand() % 15;

   for(int i=0; i<n; i++){
       std::cout << arr[i] << ", ";
       if(arr[i]>7){
           k=k+arr[i];
       }
}

   std::cout <<" "<< std::endl;




   std::cout << "Sum is " << k << std::endl;







   std::cin.get();
   std::cin.get();


   return 0;
}
