#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
 int n,x,y=0,w,i=0,k=1;

 std::cout<<"Vvedite X";
 std::cin>>x;

 std::cout<<"Vvedite N";
 std::cin>>n;

      while(i<n){

        i=i+1;

        w=(i*x)*k;

        k=k*(-1);

        y=y+w;

    }

    std::cout<< y;


}
