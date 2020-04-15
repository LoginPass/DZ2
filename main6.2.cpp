#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
 float n,x,y,w,i=1;


    std::cout<<"Vvedite n";
    std::cin>>n;

    std::cout<<"Vvedite X";
    std::cin>>x;

    y=0;

    while (i<n){

        i=i+1;

        w=(1/(x*i));

        y=y+w;

    }

    std::cout<< y;


}
