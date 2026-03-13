#include <iostream>
using namespace std;

int main()
{
  int number = 798645;
  int length = 0;

  while (true)
  {

    number /= 10;

    if (number != 0)
    {
      length++;
    }
    else
    {
      break;
    }
  }

  cout << length + 1;
}
