#include <iostream>
using namespace std;

void loop(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
}

int main()
{
  int n;
  cout << "Enter a Num : ";
  cin >> n;
  loop(n);

  cout << min(50, 7, 9);
}
