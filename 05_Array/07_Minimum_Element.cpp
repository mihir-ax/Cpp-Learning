#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {5, 8, 9, 10, 4, 3, 2};
  int min = arr[0];

  for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  cout << "Min value is : " << min;
}
