#include <iostream>
using namespace std;

int main()
{
  // Write a program to print the reverse of a given number.
  // (Example : If input is 9874 9874, the output should be 4789 4789).

  int n = 5842;
  int last_digit = 0;

  while (n != 0)
  {
    last_digit = n % 10;
    cout << last_digit;
    last_digit = 0;
    n /= 10;
  }
}
