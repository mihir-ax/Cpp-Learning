#include <iostream>
using namespace std;

int main()
{

  // Write a program to print an inverted number triangle.

  int n;
  cout << "Enter n : ";
  cin >> n;

  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << "\n";
  }
}
