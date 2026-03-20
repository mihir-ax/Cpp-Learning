#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {7, 8, 10, 11, 18, 20, 4};

  for (int i = 0; i <= v.size() - 1; i++)
  {
    for (int j = v.size() - i - 1; j >= 0; j--)
    {
      if (!(i >= j))
      {
        int *a = &v[i];
        int *b = &v[j];
        int temp = *a;
        *a = v[j];
        *b = temp;
        break;
      }
      break;
    }
  }

  for (int i = 0; i <= v.size() - 1; i++)
  {
    cout << v[i] << " ";
  }
}
