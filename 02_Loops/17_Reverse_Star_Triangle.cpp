#include <iostream>
using namespace std;

int main()
{

  // Write a program to print an inverted right-angled triangle of stars.

  int n;
  cout << "Enter n : ";
  cin >> n;

  for (int i = n; i >= 1; i--)
  {
    for (int j = i; j >= 1; j--)
    {
      cout << "* ";
    }
    cout << "\n";
  }
}
