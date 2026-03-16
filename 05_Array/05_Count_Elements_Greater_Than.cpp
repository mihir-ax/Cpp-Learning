#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Count the number of elements in a given array that are strictly greater than a given number x.
  int arr[] = {5, 7, 4, 9, 10, 14, 1, 3};
  int x = 5;
  int bigger = 0;

  for (int i = 0; i < (sizeof(arr) / sizeof(arr[i])); i++)
  {
    if (arr[i] > x)
    {
      bigger += 1;
    }
  }
  cout << bigger;
}
