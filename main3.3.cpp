#include <iostream> //Вычислить сумму элементов массива, меньших 3
#include <stdlib.h>


int main()
{
   const int n = 10;
   int arrA[n];
   int arrB[n];
   int k=0;

   srand(2547);

   for(int i=0; i<n; i++){
       arrA[i] = rand() % -10;
       arrB[i] = rand() % 10;

   for(int i=0; i<n; i++){
       std::cout << arrA[i] << ", ";
       std::cout << arrB[i] << ", ";
}
       if(arrA[i]<3){
           k=k+arrA[i];
       }
       if(arrB[i]<3){
           k=k+arrB[i];
       }
}

   std::cout <<" "<< std::endl;


   std::cout << "Sum is " << k << std::endl;


   return 0;
}
