#include <iostream>
using namespace std;

int main()
{

  int num = 45;

  if ((num % 5 == 0 || num % 3 == 0) && !(num % 15 == 0))
  {
    cout << "Consition is Satisfied ! number divisible by 5 or 3 but not divisible by 15";
  }
  else
  {
    cout << "condition is not satified ";
  }
}
