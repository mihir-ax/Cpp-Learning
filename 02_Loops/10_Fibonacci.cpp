#include <iostream>
using namespace std;

int main()
{
  // Question: Write a program to print the nth Fibonacci number
  // Concept : Maintaining previous two terms to generate the next term.Series : 1,1,2,3,5,8,

  int n;
  cout << "Enter a number : ";
  cin >> n;
  int fibonacci = 0;
  int temp1 = 1;
  int temp2 = 1;

  for (int i = 1; i < n; i++)
  {

    if (i == 1)
    {
      cout << temp1 << ", " << temp2;
    }
    else
    {
      fibonacci = temp1 + temp2;
      temp1 = temp2;
      temp2 = fibonacci;
      temp2 = fibonacci;
      cout << ", " << fibonacci;
    }
  }
}
