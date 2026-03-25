#include <bits/stdc++.h>
using namespace std;
void fibonaci(int n, int i = 0, int j = 0)
{
  if (i == 0)
  {
    cout << 0;
    i++;
  }
  else if (i == 1)
  {
    cout << 1;
    i++;
    j = 1;
  }
  else
  {
    int temp = i;
    i = j;
    j += temp;
    cout << j;
  }
}
int main()
{
  fibonaci(5);
}
