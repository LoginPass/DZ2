#include <iostream>
using namespace std;
int main()
{
  int *mas, n, sum;
  sum = 0;
  system("chcp 1251");
  system("cls");
  std::cout << "Size ";
  std::cin >> n;
  mas = new int[n];
  for (int i = 0; i<n; i++)
  {
    std::cout << "mas[" << i << "]= ";
    std::cin >> mas[i];
  }
  for (int i = 0; i<n; i++)
  {
    if (mas[i] % 2 == 0)
      sum += mas[i];
  }

  std::cout << "Summ" << sum;

  return 0;
}
