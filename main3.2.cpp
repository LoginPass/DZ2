#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
   float dx, xs, xf;

   std::cout << "Enter [xs, xf]: ";
   std::cin >> xs >> xf;

   std::cout << "Enter dx: ";
   std::cin >> dx;

   std::cout << "\tx\t\ty" << std::endl;

   std::cout.precision(5);
   float f;
   float x = xs;
   while (x < xf){

           f= (2+x)*(2+x)+3*x;

           std::cout << "\t"
                     << x
                     << "\t\t"
                     << f
                     << std::endl;

       x += dx;
   }

   return 0;
}
