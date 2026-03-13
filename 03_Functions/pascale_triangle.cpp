#include <iostream>
using namespace std;

int combinitions(int n, int r)
{
  int combine_n = 1;
  int combine_r = 1;
  int n_minus_r = n - r;
  int combine_nr = 1;

  for (int i = 1; i <= n; i++)
  {
    combine_n *= i;
  }
  for (int i = 1; i <= r; i++)
  {
    combine_r *= i;
  }
  for (int i = 1; i <= n_minus_r; i++)
  {
    combine_nr *= i;
  }

  return ((combine_n) / ((combine_r) * (combine_nr)));
}

int main()
{
  int n, r, num;
  cout << "Enter Num : ";
  cin >> num;

  // cout << combinitions(n, r);

  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (j == 1 || j == i)
      {
        cout << "1 ";
      }
      else
      {
        cout << combinitions(i - 1, j - 1) << " ";
      }
    }
    cout << "\n";
  }
}
