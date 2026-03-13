#include <iostream>
using namespace std;

int main()
{

  // Write a program to print a triangle containing only odd numbers.

  int n;
  cout << "Enter n : ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == (n / 2) + 1)
      {
        cout << "* ";
      }
      else if ((n / 2) + 1 == j)
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
    }

    cout << "\n";
  }
}
