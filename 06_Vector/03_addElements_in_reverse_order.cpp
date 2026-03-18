#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  vector<int> v2;

  for (int i = v.size() - 1; i >= 0; i--)
  {
    v2.push_back(v.at(i));
  }

  for (int i = 0; i < v2.size(); i++)
  {
    cout << v2[i] << " ";
  }
}
