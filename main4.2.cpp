#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
   float dx,xs,xf;

   std::cout << "Enter [xs,xf ]: ";
   std::cin >> xs >> xf;

   std::cout << "Enter dx: ";
   std::cin >> dx;

   std::cout << "\tx\t\ty" << std::endl;

   std::cout.precision(5);

   float y;

   float x=xs;


   while (x < 3){
if(x<3){
           y= 2*fabs(x)-5;

           std::cout << "\t"
                     << x
                     << "\t\t"
                     << y
                     << std::endl;

    x = x+dx;
}
   }

   while (x == 3){
if(x==3){
           y=1 ;

           std::cout << "\t"
                     << x
                     << "\t\t"
                     << y
                     << std::endl;

    x = x+dx;
}
   }
   while (x > 3){
if(x>3){
    while (x<xf){
           y=5*x-10 ;

           std::cout << "\t"
                     << x
                     << "\t\t"
                     << y
                     << std::endl;

    x = x+dx;
   }
}
   return 0;
}
}
