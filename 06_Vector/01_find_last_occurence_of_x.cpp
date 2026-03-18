#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{

  vector<int> v = {1, 3, 2, 4, 3, 4, 1, 6};
  int x = 1, last_value = -1;

  // correct but time taking !!

  // for (int i = 0; i < v.size(); i++)
  // {
  //   if (x == v.at(i))
  //   {
  //     last_value = i;
  //   }
  // }

  //  efficient way !!

  for (int i = v.size() - 1; i >= 0; i--)
  {
    if (x == v.at(i))
    {
      last_value = i;
      break;
    }
  }
  cout << "Last value of " << x << " is " << last_value;
}
