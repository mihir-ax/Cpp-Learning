#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v1 = {};
  vector<int> v2 = {1, 2, 3};
  vector<int> v3(v1.size() + v2.size());

  int i = 0;
  int j = 0;
  int k = 0;

  while (k < v3.size())
  {
    if (v1.size() == 0)
    {
      v3[k] = v2[j];
      j++;
      k++;
    }
    else if (v2.size() == 0)
    {
      v3[k] = v1[i];
      i++;
      j++;
    }
    else
    {
      if (v1[i] <= v2[j])
      {
        v3[k] = v1[i];
        i++;
        k++;
      }
      else if (v2[j] <= v1[i])
      {
        v3[k] = v2[j];
        j++;
        k++;
      }
    }
  }

  for (int m = 0; m < v3.size(); m++)
  {
    cout << v3[m] << " ";
  }
}
