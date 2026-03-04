#include <iostream>
using namespace std;

int main()
{

  // Write a program to print an n×n square containing English alphabets;

  int n;
  cout << "Enter n : ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 65; j <= 65 + n; j++)
    {
      char s = j;
      cout << s << " ";
    }
    cout << "\n";
  }
}
