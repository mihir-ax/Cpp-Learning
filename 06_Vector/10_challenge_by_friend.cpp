#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {2, 0, 3, 1, 2, 0, 3, 1, 2};
  int i = 0;
  int j = 0;
  int k = v.size() - 1;
  bool flag = false;
  while (j <= k)
  {
    if (v[j] == 0)
    {
      if (v[i] != 0)
      {
        int *f = &v[i];
        int *l = &v[j];
        int temp = *f;
        *f = *l;
        *l = temp;
        i++;
        j++;
      }
      else
      {
        i++;
        if (j < i)
          j = i;
      }
    }
    else if (v[j] == 3)
    {
      if (v[k] != 3)
      {
        int *f = &v[k];
        int *l = &v[j];
        int temp = *f;
        *f = *l;
        *l = temp;
        k--;
      }
      else
      {
        k--;
      }
    }
    else
    {
      if (flag && v[j] == 1)
      {
        int *f = &v[i];
        int *l = &v[j];
        int temp = *f;
        *f = *l;
        *l = temp;
        i++;
        j++;
      }
      else if (flag && v[j] == 2)
      {
        int *f = &v[k];
        int *l = &v[j];
        int temp = *f;
        *f = *l;
        *l = temp;
        k--;
      }
      else if (v[j] == 1)
      {
        j++;
      }
      else if (v[j] == 2)
      {
        j++;
      }
    }
    if (j >= k + 1)
    {
      flag = true;
      j = i;
      // i++;
      // k--;
    }
  }
  for (int m = 0; m <= v.size() - 1; m++)
  {
    cout << v[m] << " ";
  }
}
