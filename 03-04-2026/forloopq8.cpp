#include <iostream>
using namespace std;

int main()
{
  // Question: Two numbers ( A as base and B as exponent) are entered through the keyboard. Write a program to find the value of one number raised to the power of another (AB).

  int base, power;
  cout << "Enter base and power with space (4 5) : ";
  cin >> base >> power;

  int sollution = 1;

  if (power == 0)
  {
    sollution = 1;
  }
  else if (base == 0)
  {
    sollution = 0;
  }
  else
  {
    for (int i = 1; i <= power; i++)
    {
      sollution = (sollution * base);
    }
  }

  cout << "Sollution : " << sollution;
}
