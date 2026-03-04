#include <iostream>
using namespace std;

int main()
{

  // Write a program to print a right-angled triangle of stars of height n.

  int n;
  cout << "Enter n : ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*" << " ";
    }
    cout << "\n";
  }
}
