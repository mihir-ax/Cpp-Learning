#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the n : ";
  cin >> n;

  bool value = false;
  bool bit = true;
  for (int i = 1; i <= n; i++)
  {
    if (value == true)
    {
      value = false;
    }
    else if (value == false)
    {
      value = true;
    }

    if (value == 0)
    {
      bit = false;
    }
    else if (value == 1)
    {
      bit = true;
    }
    for (int j = 1; j <= i; j++)
    {
      cout << bit << " ";
      if (bit == 1)
      {
        bit = 0;
      }
      else if (bit == 0)
      {
        bit = 1;
      }
    }
    cout << endl;
  }
}
