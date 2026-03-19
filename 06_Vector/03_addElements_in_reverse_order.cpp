#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {3, 4, 7, 8, 10};
  vector<int> v2(v.size());

  // for (int i = v.size() - 1; i >= 0; i--)
  // {
  //   for (int j = v.size() - i - 1; j <= v.size(); j++)
  //   {
  //     v2[j] = (v.at(i));
  //     break;
  //   }
  // }

  for (int i = 0; i <= v.size() - 1; i++)
  {
    v2[i] = v[v.size() - 1 - i];
  }
  for (int i = 0; i < v2.size(); i++)
  {
    cout << v2[i] << " ";
  }
}
