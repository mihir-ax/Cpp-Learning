#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {1, 1, 0, 1, 0, 1, 1, 0};

  // ---------------
  //   Method - 1
  // ---------------
  // int noz = 0;
  // int noo = 0;
  // for (int i = 0; i < v.size(); i++)
  // {
  //   if (v[i] == 0)
  //     noz++;
  //   else
  //     noo++;
  // }
  // for (int i = 0; i < v.size(); i++)
  // {
  //   if (i <= noz - 1)
  //     v[i] = 0;
  //   else
  //     v[i] = 1;
  // }

  // for (int i = 0; i < v.size(); i++)
  // {
  //   cout << v[i] << " ";
  // }

  // ---------------
  //   Method - 2
  // ---------------
  int i = 0;
  int j = v.size() - 1;
  while (i < j)
  {
    if (v[i] == 0)
      i++;
    if (v[j] == 1)
      j--;
    if (i < j)
      break;
    if ((v[i] == 1) && (v[j] == 0))
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
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}
