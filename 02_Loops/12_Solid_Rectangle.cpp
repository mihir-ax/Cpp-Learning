#include <iostream>
using namespace std;

int main()
{

  // Write a program to print a solid rectangle of stars. Take the number of rows (n) and columns (m) as input from the user.

  int length, width;
  cout << "Enter length and width with space (5 6) : ";
  cin >> length >> width;

  for (int i = 1; i <= length; i++)
  {
    for (int j = 1; j <= width; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
}
