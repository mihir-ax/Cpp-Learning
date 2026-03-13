#include <iostream>
using namespace std;

int main()
{

  // Write a program to print a number triangle where columns print numbers from 1 up to the row number i.

  int n;
  cout << "Enter n : ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << "\n";
  }
}
