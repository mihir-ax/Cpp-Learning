#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the n : ";
  cin >> n;
  int count = 0;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n * 2; j++)
    {

      if ((j > n - i) && (j < n + i))
      {
        if (j <= n)
        {
          count++;
          cout << count << " ";
        }
        else
        {
          count--;
          cout << count << " ";
        }
      }
      else
      {
        cout << "  ";
      }
    }
    cout << "\n";
    count = 0;
  }
}
