#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {2, 3, 5, 8, 20, 4};
  int start = 1;
  int end = 4;

  while (start < end)
  {
    int *a = &v[start];
    int *b = &v[end];
    int temp = *a;
    *a = *b;
    *b = temp;
    start++;
    end--;
  }
  for (int i = 0; i <= v.size() - 1; i++)
  {
    cout << v[i] << " ";
  }
}
