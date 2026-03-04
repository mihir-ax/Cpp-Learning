#include <iostream>
using namespace std;

int main()
{
  // Write a program to print the sum of the digits of a given number n
  // Example : If n = 512 the output should be 5 + 1 + 2 = 8

  int n = 5842;
  int last_digit = 0;
  int sum = 0;

  while (n != 0)
  {
    last_digit = n % 10;
    sum = sum + last_digit;
    last_digit = 0;
    n /= 10;
  }

  cout << "Total Sum : " << sum << endl;
}
