#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
   float dx, xs, xf;
   const float eps = 0.000001;

   std::cout << "Enter [xs, xf]: ";
   std::cin >> xs >> xf;

   std::cout << "Enter dx: ";
   std::cin >> dx;

   std::cout << "\tx\t\ty" << std::endl;

   std::cout.precision(5);
   float f;
   float x = xs;
   while (x < xf){
       if(fabs(sin(9*x+71)) < eps)
           std::cout << "\t"
                     << x
                     << "\t\t Divide on zero"
                     << std::endl;
       else {
           f= sqrt(5*x+4*x*x*x)+4*x+(3/sin(9*x+71));

           std::cout << "\t"
                     << x
                     << "\t\t"
                     << f
                     << std::endl;
       }
       x += dx;
   }

   return 0;
}
