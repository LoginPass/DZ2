#include <iostream>

int n;

int main() {
   std::cin>>n;
   for(int i=1; i < n+1; i++){
      for(int j=0; j < i; j++)
           std::cout << 0;
       std::cout << std::endl;
   }

   std::cout << std::endl;

   std::getchar();
   return 0;
}
