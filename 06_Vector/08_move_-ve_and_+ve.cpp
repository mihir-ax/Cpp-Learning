#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {1, -5, 4, -2, -3, 10};
  int i = 0;
  int j = v.size() - 1;
  while (i < j)
  {
    if (v[i] < 0)
    {
      i++;
    }
    if (v[j] > 1)
    {
      j--;
    }
    if (i > j)
      break;
    if (v[i] > 0 && v[j] < 0)
    {
      int *f = &v[i];
      int *l = &v[j];
      int temp = *f;
      *f = *l;
      *l = temp;
      i++;
      j--;
    }
  }
  for (int k = 0; k < v.size(); k++)
  {
    cout << v[k] << " ";
  }
}
