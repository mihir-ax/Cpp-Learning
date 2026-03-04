#include <iostream>
using namespace std;

int main()
{
  // Write a program to print the factorial of a given number n n(n!)
  // Example : 5!= 5 × 4 × 3 × 2 × 1 = 120

  int n;
  cout << "Enter a number : ";
  cin >> n;
  int factorial = 1;

  for (int i = 1; i <= n; i++)
  {
    factorial *= (i);
  }

  cout << "Factorial is : " << factorial;
}
