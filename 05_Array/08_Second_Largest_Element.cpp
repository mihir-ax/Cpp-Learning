#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Find the second largest element in the given array.

  int arr[] = {5, 7, 8, 9, 11, 2, 15};
  int largest = arr[0];
  int sec_largest = arr[0];

  for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
  {
    if (arr[i] > largest)
    { 
      sec_largest = largest;
      largest = arr[i];
    }
  }

  cout << "Second largest number is : " << sec_largest;
}
