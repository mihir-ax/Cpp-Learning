#include <iostream>
using namespace std;

int main()
{

  // Write a program to print a solid square of stars. Take the side of the square (n) as input.

  int side;
  cout << "Enter side length : ";
  cin >> side;

  for (int i = 1; i <= side; i++)
  {
    for (int j = 1; j <= side; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
}
